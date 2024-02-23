//mainwindow.h

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qlineedit.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    QString number1, number2;
    int state =1;
    float result;
    short operand;





    void calculateResult(); 
    void numberClickHandler();
    void clearandenterclickhandler();
    void addsubmuldivclickhandler();
    void resetlinedits();


};
#endif // MAINWINDOW_H
