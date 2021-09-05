#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
        double firstNumber = 0, secondNumber = 0;
        char operation;

public slots:
    void pushButton_0();
    void pushButton_1();
    void pushButton_2();
    void pushButton_3();
    void pushButton_4();
    void pushButton_5();
    void pushButton_6();
    void pushButton_7();
    void pushButton_8();
    void pushButton_9();
    void pushButton_plus();
    void pushButton_minus();
    void pushButton_comma();
    void pushButton_division();
    void pushButton_multiply();
    void pushButton_equals();
    void pushButton_clear();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
