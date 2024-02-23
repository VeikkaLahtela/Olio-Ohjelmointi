// mainwindow.cpp

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);




    connect(ui->add, &QPushButton::clicked, this, &MainWindow::addsubmuldivclickhandler);
    connect(ui->sub, &QPushButton::clicked, this, &MainWindow::addsubmuldivclickhandler);
    connect(ui->mul, &QPushButton::clicked, this, &MainWindow::addsubmuldivclickhandler);
    connect(ui->div, &QPushButton::clicked, this, &MainWindow::addsubmuldivclickhandler);


    connect(ui->n1, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n2, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n3, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n4, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n5, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n6, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n7, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n8, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n9, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n0, &QPushButton::clicked, this, &MainWindow::numberClickHandler);

    connect(ui->enter, &QPushButton::clicked, this, &MainWindow::calculateResult);
    connect(ui->clear, &QPushButton::clicked, this, &MainWindow::resetlinedits);


}

void MainWindow::resetlinedits() {
    state = 1; 
    number1.clear(); 
    number2.clear(); 

    ui->lineEditNumber1->clear();
    ui->lineEditNumber2->clear();
    ui->lineResult->clear(); 
}


void MainWindow::addsubmuldivclickhandler() {
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (!button) return;

    if (button->objectName() == "add") {
        operand = 0; // Esimerkiksi + operaatio
    } else if (button->objectName() == "sub") {
        operand = 1; // -
    } else if (button->objectName() == "mul") {
        operand = 2; // *
    } else if (button->objectName() == "div") {
        operand = 3; // /
    }

    state = 2;
}




void MainWindow::numberClickHandler() {
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (!button) return;

    QString number = button->text();
    if (state == 1) {
        number1 += number;
        ui->lineEditNumber1->setText(number1);
    } else if (state == 2) {
        number2 += number;
        ui->lineEditNumber2->setText(number2);
    }
}

void MainWindow::calculateResult() {
    float num1 = number1.toFloat();
    float num2 = number2.toFloat();
    float result = 0.0;

    switch (operand) {
    case 0: // +
        result = num1 + num2;
        break;
    case 1: // -
        result = num1 - num2;
        break;
    case 2: // *
        result = num1 * num2;
        break;
    case 3: // /
        if (num1 != 0) { 
            result = num1 / num2;
        } else {
            ui->lineResult->setText("nollalla jakaminen");
            return;
        }
        break;
    }

    ui->lineResult->setText(QString::number(result));
}





MainWindow::~MainWindow(){


    delete ui;
}


