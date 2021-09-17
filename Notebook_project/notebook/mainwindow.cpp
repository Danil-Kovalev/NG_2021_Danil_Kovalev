#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_file = new QListWidgetItem();

    connect (ui->b_create, &QPushButton::clicked, this, &MainWindow::createFile);
    connect (ui->b_delete, &QPushButton::clicked, this, &MainWindow::deleteFile);
    connect (ui->b_edit, &QPushButton::clicked, this, &MainWindow::editFile);
    connect (ui->b_search, &QPushButton::clicked, this, &MainWindow::searchFile);
    connect (ui->listFiles, &QListWidget::itemSelectionChanged, this, &MainWindow::noteSelect);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createFile()
{
    QString path = QFileDialog::getSaveFileName(this, tr("Create file"), "C:\\book", tr(".txt"));
    if (path.isEmpty()) {
        return;
    }
    QFile file(path);
    if (file.open(QIODevice::WriteOnly)) {
        QTextStream to(&file);
        file.close();
    }
}

void MainWindow::deleteFile()
{
    QString path = ("C:/book");
    int noteNum = ui->listFiles->currentRow();
    QFile file(path + "/" + ui->listFiles->item(noteNum)->text());
    file.open(QIODevice::WriteOnly);
    QTextStream to(&file);
    file.remove();
    file.close();
}

void MainWindow::editFile()
{
    QString path = ("C:/book");
    int noteNum = ui->listFiles->currentRow();
    QFile file(path + "/" + ui->listFiles->item(noteNum)->text());
    file.open(QFile::WriteOnly);
    QString str = ui->userText->toPlainText();
    file.write(str.toUtf8());
    file.close();
}

void MainWindow::searchFile()
{
    ui->listFiles->clear();
    QString path = ("C:\\book");
    QDir current(path);
    QStringList files = current.entryList(QDir::Files |QDir::NoDotAndDotDot);
    ui->listFiles->addItems(files);
}

void MainWindow::noteSelect()
{
    QString path = ("C:/book");
    int noteNum = ui->listFiles->currentRow();
    QFile file(path + "/" + ui->listFiles->item(noteNum)->text());
    file.open(QFile::ReadOnly);
    QTextStream stream(&file);
    QString buffer = stream.readAll();
    ui->userText->setText(buffer);
    file.close();
}

