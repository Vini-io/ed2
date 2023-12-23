#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <fstream>
#include <sstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    treatmentGrafo();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::treatmentGrafo()
{
    std::ifstream arquivo;
    arquivo.open("C:/Users/vini/Desktop/atividades/ED2_16/16/vertices.txt");

    std::string linha, caracters;
    int VRY = true;

    if(arquivo.is_open()){

        while(std::getline(arquivo, linha)){

            if(VRY){
                obj_grafo = new matriz_grafo(std::stoi(linha));
                VRY = false;
            }


            std::stringstream attrString(linha);
            caracters = "";
            int n = 2;
            int VERTICE[3];

            while(std::getline(attrString, caracters, ';')){



                n = (n + 1) % 3;

                if(n == 0 ){
                    VERTICE[0] = std::stoi(caracters);
                }else if(n == 1){
                    VERTICE[1] = std::stoi(caracters);
                }else if(n == 2){
                    VERTICE[2] = std::stoi(caracters);
                }
            }


            obj_grafo->insertGrafo(VERTICE[0], VERTICE[1], VERTICE[2]);


        }
        arquivo.close();
    }


    if(obj_grafo->tam > 0){

        ui->treeWidget->setColumnCount(obj_grafo->tam);

        QStringList lables;
        lables << "Vertice";

        for(int i = 0; i < obj_grafo->tam; i++){
            lables = lables << QString::number(i);
        }

        ui->treeWidget->setHeaderLabels(lables);

        for(int i = 0; i < obj_grafo->tam; i++){

            QTreeWidgetItem *root = new QTreeWidgetItem(ui->treeWidget);
            root->setText(0, QString::number(i));

            for(int j = 0; j < obj_grafo->tam; j++){
                root->setText(j + 1, QString::number(obj_grafo->grafo[i][j]));
                ui->treeWidget->addTopLevelItem(root);
            }
        }
    }
}


void MainWindow::on_pushButton_clicked()
{
    updateGrafo();
}

void MainWindow::updateGrafo()
{
    if(obj_grafo->tam > 0){

        ui->treeWidget->setColumnCount(obj_grafo->tam);

        QStringList lables;
        lables << "Vertice";

        for(int i = 0; i < obj_grafo->tam; i++){
            lables = lables << QString::number(i);
        }

        ui->treeWidget->setHeaderLabels(lables);
        ui->treeWidget->clear();
        for(int i = 0; i < obj_grafo->tam; i++){

            QTreeWidgetItem *root = new QTreeWidgetItem(ui->treeWidget);
            root->setText(0, QString::number(i));

            for(int j = 0; j < obj_grafo->tam; j++){
                root->setText(j + 1, QString::number(obj_grafo->grafo[i][j]));
                ui->treeWidget->addTopLevelItem(root);
            }
        }
    }
}


void MainWindow::on_btn_ligacao_clicked()
{
    int vertice = ui->entrada_vertice->text().toInt();
    int ligacao = ui->entrada_ligacao->text().toInt();
    int peso = ui->entrada_peso->text().toInt();

    if(obj_grafo->insertGrafo(vertice, ligacao, peso)){
        updateGrafo();
        QMessageBox messageBox;
        messageBox.setText("Inserido com sucesso!");
        messageBox.setIcon(QMessageBox::Information);
        messageBox.exec();
    }else{
        QMessageBox messageBox;
        messageBox.setText("Vertice invalido");
        messageBox.setIcon(QMessageBox::Critical);
        messageBox.exec();
    }

}


void MainWindow::on_btn_consultar_clicked()
{
    int consultar = ui->entrada_consulta->text().toInt();

    if(obj_grafo->tam > 0 && consultar < obj_grafo->tam && consultar > -1){

        ui->treeWidget->setColumnCount(obj_grafo->tam);

        QStringList lables;
        lables << "Vertice";

        for(int i = 0; i < obj_grafo->tam; i++){
            lables = lables << QString::number(i);
        }

        ui->treeWidget->setHeaderLabels(lables);
        ui->treeWidget->clear();


        QTreeWidgetItem *root = new QTreeWidgetItem(ui->treeWidget);
        root->setText(0, QString::number(consultar));

        for(int j = 0; j < obj_grafo->tam; j++){
            root->setText(j + 1, QString::number(obj_grafo->grafo[consultar][j]));
            ui->treeWidget->addTopLevelItem(root);
        }
    }else{
        QMessageBox messageBox;
        messageBox.setText("Vertice invalido");
        messageBox.setIcon(QMessageBox::Critical);
        messageBox.exec();
    }
}




void MainWindow::on_btn_alterar_clicked()
{
    int vertice = ui->alterar_vertice->text().toInt();
    int ligacao = ui->alterar_ligacao->text().toInt();
    int newLigacao = ui->alterar_novaligacao->text().toInt();
    int newPeso = ui->alterar_peso->text().toInt();

    if(obj_grafo->alterarGrafo(vertice, ligacao, newLigacao, newPeso)){
        updateGrafo();
        QMessageBox messageBox;
        messageBox.setText("Alterado com sucesso!");
        messageBox.setIcon(QMessageBox::Information);
        messageBox.exec();
    }else{
        QMessageBox messageBox;
        messageBox.setText("Vertice não declarado!");
            messageBox.setIcon(QMessageBox::Critical);
        messageBox.exec();
    }


}


void MainWindow::on_btn_remover_clicked()
{
    int vertice = ui->vertice_remover->text().toInt();
    int ligacao = ui->vertice_ligacao->text().toInt();

    if(obj_grafo->excluirGrafo(vertice, ligacao)){
        updateGrafo();
        QMessageBox messageBox;
        messageBox.setText("excluido!");
        messageBox.setIcon(QMessageBox::Information);
        messageBox.exec();
    }else{
        QMessageBox messageBox;
        messageBox.setText("Vertice não encontrado");
            messageBox.setIcon(QMessageBox::Critical);
        messageBox.exec();
    }

}


void MainWindow::on_btn_caminho_clicked()
{
    int inicio = ui->vertice_inicio->text().toInt();
    int final = ui->vertice_final->text().toInt();

    obj_grafo->createEtiqueta(inicio);

    if(obj_grafo->tam > 0){

        ui->treeWidget->setColumnCount(obj_grafo->tam);

        QStringList lables;
        lables << "Vertice";

        for(int i = 0; i < obj_grafo->tam; i++){
            lables = lables << QString::number(i);
        }

        ui->treeWidget->setHeaderLabels(lables);
        ui->treeWidget->clear();
        for(int i = 0; i < obj_grafo->tam; i++){

            QTreeWidgetItem *root = new QTreeWidgetItem(ui->treeWidget);
            root->setText(0, QString::number(i));

            for(int j = 0; j < obj_grafo->tam; j++){
                root->setText(j + 1, QString::number(obj_grafo->grafo_etiqueta[i][j].CA) + " " + QString::number(obj_grafo->grafo_etiqueta[i][j].VP)+ " " + QString::number(obj_grafo->grafo_etiqueta[i][j].QAV) + " " + obj_grafo->grafo_etiqueta[i][j].SV);
                ui->treeWidget->addTopLevelItem(root);
            }
        }
    }



}

