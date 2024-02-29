#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QProgressBar>
#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void updateprogressbar();
    void setgameinfotext(QString,short);

public slots:
    void timeout();


private:
    Ui::MainWindow *ui;
    short player1time;
    short player2time;
    short currentplayer;
    short gametime;
    QTimer *pQTimer;

    int counter=0;

    void testi1();
    void testi2();

    void updateProgressBar();
    void startGame();
    void stopGame();
    void switchPlayer();
    void selectGameTime(short time);
};
#endif // MAINWINDOW_H
