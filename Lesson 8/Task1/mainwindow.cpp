#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->button_0, &QPushButton::clicked, this, &MainWindow::pushButton_0);
    connect(ui->button_1, &QPushButton::clicked, this, &MainWindow::pushButton_1);
    connect(ui->button_2, &QPushButton::clicked, this, &MainWindow::pushButton_2);
    connect(ui->button_3, &QPushButton::clicked, this, &MainWindow::pushButton_3);
    connect(ui->button_4, &QPushButton::clicked, this, &MainWindow::pushButton_4);
    connect(ui->button_5, &QPushButton::clicked, this, &MainWindow::pushButton_5);
    connect(ui->button_6, &QPushButton::clicked, this, &MainWindow::pushButton_6);
    connect(ui->button_7, &QPushButton::clicked, this, &MainWindow::pushButton_7);
    connect(ui->button_8, &QPushButton::clicked, this, &MainWindow::pushButton_8);
    connect(ui->button_9, &QPushButton::clicked, this, &MainWindow::pushButton_9);
    connect(ui->button_comma, &QPushButton::clicked, this, &MainWindow::pushButton_comma);
    connect(ui->button_plus, &QPushButton::clicked, this, &MainWindow::pushButton_plus);
    connect(ui->button_minus, &QPushButton::clicked, this, &MainWindow::pushButton_minus);
    connect(ui->button_equals, &QPushButton::clicked, this, &MainWindow::pushButton_equals);
    connect(ui->button_divison, &QPushButton::clicked, this, &MainWindow::pushButton_division);
    connect(ui->button_multiply, &QPushButton::clicked, this, &MainWindow::pushButton_multiply);
    connect(ui->button_clear, &QPushButton::clicked, this, &MainWindow::pushButton_clear);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pushButton_0()
{
    ui->result_window->setText(ui->result_window->text().operator+=('0'));
}

void MainWindow::pushButton_1()
{
    ui->result_window->setText(ui->result_window->text().operator+=('1'));
}

void MainWindow::pushButton_2()
{
    ui->result_window->setText(ui->result_window->text().operator+=('2'));
}

void MainWindow::pushButton_3()
{
    ui->result_window->setText(ui->result_window->text().operator+=('3'));
}

void MainWindow::pushButton_4()
{
    ui->result_window->setText(ui->result_window->text().operator+=('4'));
}

void MainWindow::pushButton_5()
{
    ui->result_window->setText(ui->result_window->text().operator+=('5'));
}

void MainWindow::pushButton_6()
{
    ui->result_window->setText(ui->result_window->text().operator+=('6'));
}

void MainWindow::pushButton_7()
{
    ui->result_window->setText(ui->result_window->text().operator+=('7'));
}

void MainWindow::pushButton_8()
{
    ui->result_window->setText(ui->result_window->text().operator+=('8'));
}

void MainWindow::pushButton_9()
{
    ui->result_window->setText(ui->result_window->text().operator+=('9'));
}

void MainWindow::pushButton_comma()
{
    ui->result_window->setText(ui->result_window->text().operator+=('.'));
}

void MainWindow::pushButton_plus()
{
    firstNumber = ui->result_window->text().toDouble();
    operation = '+';
    ui->result_window->clear();
}

void MainWindow::pushButton_minus()
{
    firstNumber = ui->result_window->text().toDouble();
    operation = '-';
    ui->result_window->clear();
}

void MainWindow::pushButton_division()
{
    firstNumber = ui->result_window->text().toDouble();
    operation = '/';
    ui->result_window->clear();
}

void MainWindow::pushButton_multiply()
{
    firstNumber = ui->result_window->text().toDouble();
    operation = '*';
    ui->result_window->clear();
}

void MainWindow::pushButton_equals()
{
    secondNumber = ui->result_window->text().toDouble();
    switch (operation)
    {
    case '+':
        ui->result_window->setText(QString::number(firstNumber + secondNumber));
        break;
    case '-':
        ui->result_window->setText(QString::number(firstNumber - secondNumber));
        break;
    case '/':
        ui->result_window->setText(QString::number(firstNumber / secondNumber));
        break;
    case '*':
        ui->result_window->setText(QString::number(firstNumber * secondNumber));
        break;
    }
}

void MainWindow::pushButton_clear()
{
    ui->result_window->clear();
}


