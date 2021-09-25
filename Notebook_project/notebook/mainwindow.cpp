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
    connect(ui->b_color, &QPushButton::clicked, this, &MainWindow::setColorText);
    connect(ui->b_searchName, &QPushButton::clicked, this, &MainWindow::searchNameFile);
    connect(ui->b_searchTag, &QPushButton::clicked, this, &MainWindow::searchTagFile);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createFile()
{
    QFile file("C:/book/" + ui->nameFile->toPlainText());
    if(!file.isOpen()) {
        file.open(QIODevice::WriteOnly);
        QString stringUser = ui->userText->toPlainText();
        file.write(stringUser.toUtf8());
        file.close();
    }

    QFile fileForTag("C:/book/fileForTag.txt");
    QString tag = ui->tagFile->toPlainText();
    QString name = ui->nameFile->toPlainText();
    QString record = name + ":" + tag + "\n";
    if (!fileForTag.isOpen()) {
        fileForTag.open(QIODevice::Append);
        fileForTag.write(record.toUtf8());
        fileForTag.close();
    }
}

void MainWindow::deleteFile()
{
    int noteNum = ui->listFiles->currentRow();
    QFile file("C:/book/" + ui->listFiles->item(noteNum)->text());
    file.open(QIODevice::WriteOnly);
    file.remove();
    file.close();
    ui->listFiles->clear();
}

void MainWindow::editFile()
{
    int noteNum = ui->listFiles->currentRow();
    QFile file("C:/book/" + ui->listFiles->item(noteNum)->text());
    file.open(QFile::WriteOnly);
    QString str = ui->userText->toHtml();
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
    ui->userText->setHtml(buffer);
    file.close();
}

void MainWindow::setColorText()
{
    int red = ui->s_red->value();
    int green = ui->s_green->value();
    int blue = ui->s_blue->value();
    ui->userText->setTextColor(QColor (red, green, blue));
}

void MainWindow::searchNameFile()
{
    ui->listFiles->clear();
    QString nameFiles = ui->nameFile->toPlainText();
    QDir current("C:/book");
    QStringList searchNameFiles = current.entryList(QStringList(nameFiles), QDir::Files | QDir::NoDotAndDotDot);
    ui->listFiles->addItems(searchNameFiles);
    ui->nameFile->clear();
    ui->tagFile->clear();
}

void MainWindow::searchTagFile()
{
    ui->listFiles->clear();
    QFile nameFileForTag("C:/book/fileForTag.txt");
    QString name = ui->nameFile->toPlainText();
    QFile file("C:/book" + name);

    nameFileForTag.open(QFile::ReadOnly);
    QString bufferForTag = nameFileForTag.readAll();
    nameFileForTag.close();

    QStringList recordsList = bufferForTag.split('\n');
    QString searchTag = ui->tagFile->toPlainText();

    if (file.isOpen()) {
        for (QString record : recordsList) {
            if (record.contains(searchTag)) {
                ui->listFiles->addItem(record.split(':').first());
            }
        }
    }
    ui->nameFile->clear();
    ui->tagFile->clear();
}
