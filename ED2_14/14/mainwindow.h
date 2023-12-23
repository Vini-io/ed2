#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "vertice.h"
#include "tabela_hash.h"
#include <lista.h>
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

private slots:
    void on_btn_consultar_clicked();
    void on_btn_ligacao_clicked();
    void on_pushButton_clicked();
    void on_btn_remover_clicked();

    void on_btn_alterar_clicked();

    void on_btn_entrada_clicked();

private:
    //void displayTree();

    Ui::MainWindow *ui;
    VN::Vertice *obj;
    VN::Tabela_hash<VN::Vertice> tabela;

};
#endif // MAINWINDOW_H
