#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "matriz_grafo.h"
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

    void treatmentGrafo();

private slots:
    void on_pushButton_clicked();
    void updateGrafo();
    void on_btn_ligacao_clicked();

    void on_btn_consultar_clicked();

    void on_btn_alterar_clicked();

    void on_btn_remover_clicked();

private:
    Ui::MainWindow *ui;
    matriz_grafo* obj_grafo;
};
#endif // MAINWINDOW_H
