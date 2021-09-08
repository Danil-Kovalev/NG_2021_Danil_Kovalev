#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->lineText, &QLineEdit::textChanged, this, &MainWindow::countWord);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::countWord()
{
    QString string = ui->lineText->text();
    int count = 0, words = 0, i = 0;
    while (string[i] != 0) {
        if(count == 0) {
            if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z')) {
                count = 1;
                words++;
            }
        }
        else  if ((string[i] >= ' ' && string[i] <= '@') || (string[i] >= '[' && string[i] <= '`') || (string[i] >= '{' && string[i] <= '-')) {
            count = 0;
        }
        i++;
    }
    ui->count->setValue(words);
}

