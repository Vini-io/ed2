#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "numuser.h"
#include <QMainWindow>
#include <QStringList>
#include <QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_entrada_clicked();

    void on_btn_buscar_clicked();

private:
    Ui::MainWindow *ui;
    VINI::numuser *array;
};
#endif // MAINWINDOW_H
