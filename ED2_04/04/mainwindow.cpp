#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_entrada_clicked()
{
    try{
        int tam = ui->input_entrada->text().toInt();
        array = new VINI::numuser(tam);
        array->createArray();
        QStringList exit, exitSort;
        for(int i = 0; i<tam ;i++){
            exit.append(QString::number(array->getElement(i)));
        }

        QString valueExit = " " + exit.join(" / ");
        ui->saida->setText(valueExit);

        array->selectionSort();

        for(int i = 0; i < tam; i++){
            exitSort.append(QString::number(array->getElement(i)));
        }
        QString valueExitSort = " " + exitSort.join(" / ");
        ui->saida2->setText(valueExitSort);

    }catch(const QString &erro){
        QMessageBox::critical(this,"Erro no sistema, tenta de novo - ERRO: ", erro);
    }


}


void MainWindow::on_btn_buscar_clicked(){
    try{

        int value = ui->input_valor->text().toInt();
        int result = array->accessPosArray(value, 0, array->getTam() - 1, (array->getTam() / 2) - 1);
        ui->input_result->setText("Valor encontrado na posição: " + QString::number(result));

    }catch(const QString &err){
        ui->input_result->setText("Valor não encontrado");
    }
}
