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
        ui->lineEdit->setText(QString::number(array->exe1));

        QString valueExitSort = " " + exitSort.join(" / ");
        ui->saida2->setText(valueExitSort);

    }catch(const QString &erro){
        QMessageBox::critical(this,"Erro no sistema, tenta de novo - ERRO: ", erro);
    }


}


void MainWindow::on_btn_buscar_clicked(){
    try{
        int value = ui->input_valor->text().toInt();
        ui->input_result->setText("Valor encontrado na posição: " + QString::number(array->accessPosArray(value)));
        ui->lineEdit_3->setText(QString::number(array->exe3));

    }catch(const QString &err){
        ui->input_result->setText("Valor não encontrado");
        ui->lineEdit_3->setText("");
    }

}


void MainWindow::on_btn_buscar_2_clicked()
{
    try{
        int value = ui->input_valor_2->text().toInt();
        ui->input_result_2->setText("Valor encontrado na posição: " + QString::number(array->searchArrayNoOrder(value)));
        ui->lineEdit_2->setText(QString::number(array->exe2));
    }catch(const QString &err){
        ui->input_result_2->setText("Valor não encontrado");
        ui->lineEdit_2->setText("");
    }
}


void MainWindow::on_btn_buscar_3_clicked()
{
    try{
        int value = ui->input_valor_3->text().toInt();
        ui->input_result_3->setText("Valor encontrado na posição: " + QString::number(array->searchArrayBinaria(value)));
        ui->lineEdit_4->setText(QString::number(array->exe4));
    }catch(const QString &err){
        ui->input_result_3->setText("Valor não encontrado");
        ui->lineEdit_4->setText("");
    }
}

