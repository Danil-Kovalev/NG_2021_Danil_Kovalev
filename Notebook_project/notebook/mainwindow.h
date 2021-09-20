#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void createFile();
    void deleteFile();
    void editFile();
    void searchFile();
    void noteSelect();
    void setYellowColorText();
    void setBlackColorText();
    void searchTagFile();

private:
    Ui::MainWindow *ui;

    QListWidgetItem *m_file;
};
#endif // MAINWINDOW_H
