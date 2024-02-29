#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    pQTimer = new QTimer(this);
    connect(pQTimer, &QTimer::timeout, this, &MainWindow::timeout);


    connect(ui->btnshort, &QPushButton::clicked, this, [this](){ selectGameTime(2); });
    connect(ui->btnlong, &QPushButton::clicked, this, [this](){ selectGameTime(5); });
    connect(ui->start, &QPushButton::clicked, this, &MainWindow::startGame);
    connect(ui->stop, &QPushButton::clicked, this, &MainWindow::stopGame);
    connect(ui->s1, &QPushButton::clicked, this, &MainWindow::switchPlayer);

    connect(ui->s2, &QPushButton::clicked, this, &MainWindow::switchPlayer);

    setgameinfotext("Please select game time", 12);

}

void MainWindow::selectGameTime(short time) {
    gametime = time * 60;
    setgameinfotext("Game time selected. Press Start Game to begin.", 12);
}

void MainWindow::startGame() {
    player1time = gametime;
    player2time = gametime;
    currentplayer = 1;
    pQTimer->start(1000);
    setgameinfotext("Game on", 12);
    updateProgressBar();
}

void MainWindow::stopGame() {
    pQTimer->stop();
    setgameinfotext("Game stopped. Please select game time.", 12);
}

void MainWindow::switchPlayer() {
    currentplayer = (currentplayer == 1) ? 2 : 1;

    QString infoText = currentplayer == 1 ? "Player 2's turn" : "Player 1's turn";
}

void MainWindow::timeout() {
    if (currentplayer == 1) {
        if (player1time > 0) player1time--;
        else stopGame();
    } else {
        if (player2time > 0) player2time--;
        else stopGame();
    }
    updateProgressBar();

    if (player1time == 0 || player2time == 0) {
        pQTimer->stop();
        QString winnerText = player1time == 0 ? "Player 2 wins" : "Player 1 wins";
        setgameinfotext(winnerText, 12);
    }
}


void MainWindow::updateProgressBar() {
    if (gametime > 0) {

        int player1Progress = static_cast<int>((static_cast<double>(player1time) / gametime) * 100);
        int player2Progress = static_cast<int>((static_cast<double>(player2time) / gametime) * 100);

    ui->bar1->setValue(player1Progress);
    ui->bar2->setValue(player2Progress);
    }
}

void MainWindow::setgameinfotext(QString text, short fontSize) {
    QFont font = ui->label->font();
    font.setPointSize(fontSize);
    ui->label->setFont(font);
    ui->label->setText(text);

}


MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::testi1()
{
    updateProgressBar();
    counter++;
    ui->label->setText(QString::number(counter));

}

void MainWindow::testi2()
{
    counter=0;
    ui->label->setText(QString::number(counter));
    ui->bar1->setValue(0);
}

