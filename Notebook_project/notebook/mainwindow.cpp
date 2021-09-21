#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QDir>
#include <QColorDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect (ui->b_create, &QPushButton::clicked, this, &MainWindow::createFile);
    connect (ui->b_delete, &QPushButton::clicked, this, &MainWindow::deleteFile);
    connect (ui->b_edit, &QPushButton::clicked, this, &MainWindow::editFile);
    connect (ui->b_search, &QPushButton::clicked, this, &MainWindow::searchFile);
    connect (ui->listFiles, &QListWidget::itemSelectionChanged, this, &MainWindow::noteSelect);
    connect(ui->b_color, &QPushButton::clicked, this, &MainWindow::setYellowColorText);
    connect(ui->b_color2, &QPushButton::clicked, this, &MainWindow::setBlackColorText);
    connect(ui->b_searchName, &QPushButton::clicked, this, &MainWindow::searchNameFile);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createFile()
{
    QFile file("C:/book/" + ui->nameFile->toPlainText());
    file.open(QIODevice::WriteOnly);
    QString stringUser = ui->userText->toPlainText();
    file.write(stringUser.toUtf8());
    file.close();

    QFile fileForTag("C:/book/fileForTag.txt");
    if (!fileForTag.isOpen()) {
        fileForTag.open(QIODevice::WriteOnly);
        QString tag = ui->tagFile->toPlainText();
        fileForTag.write(tag.toUtf8());
        fileForTag.close();
    }
}

void MainWindow::deleteFile()
{
    int noteNum = ui->listFiles->currentRow();
    QFile file("C:/book/" + ui->listFiles->item(noteNum)->text());
    file.open(QIODevice::WriteOnly);
    QTextStream to(&file);
    file.remove();
    file.close();
    ui->listFiles->clear();
}

void MainWindow::editFile()
{
    int noteNum = ui->listFiles->currentRow();
    QFile file("C:/book/" + ui->listFiles->item(noteNum)->text());
    file.open(QFile::WriteOnly);
    QString str = ui->userText->toPlainText();
    file.write(str.toUtf8());
    file.close();
}

void MainWindow::searchFile()
{
    ui->listFiles->clear();
    QDir current("C:/book");
    QStringList files = current.entryList(QDir::Files | QDir::NoDotAndDotDot);
    ui->listFiles->addItems(files);
}

void MainWindow::noteSelect()
{
    int noteNum = ui->listFiles->currentRow();
    QFile file("C:/book/" + ui->listFiles->item(noteNum)->text());
    file.open(QFile::ReadOnly);
    QTextStream stream(&file);
    QString buffer = stream.readAll();
    ui->userText->setText(buffer);
    file.close();
}

void MainWindow::setYellowColorText()
{
    ui->userText->setTextColor(QColor ("yellow"));
}

void MainWindow::setBlackColorText()
{
    ui->userText->setTextColor(QColor("black"));
}

void MainWindow::searchNameFile()
{
    ui->listFiles->clear();
    QString nameFiles = ui->nameFile->toPlainText();
    QDir current("C:/book");
    QStringList searchNameFiles = current.entryList(QStringList(nameFiles), QDir::Files | QDir::NoDotAndDotDot);
    ui->listFiles->addItems(searchNameFiles);
    ui->nameFile->clear();
}

void MainWindow::searchTagFile()
{
    ui->listFiles->clear();

    QFile nameFileForTag("C:/book/fileForTag.txt");
    nameFileForTag.open(QFile::ReadOnly);
    QTextStream stream(&nameFileForTag);
    QString bufferForTag = stream.readAll();

    QDir currentTag("C:/book");
    QStringList searchNameTagFiles = currentTag.entryList(QDir::Files | QDir::NoDotAndDotDot);
    ui->listFiles->addItems(searchNameTagFiles);
}
