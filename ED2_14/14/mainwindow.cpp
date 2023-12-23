#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <fstream>
#include <sstream>
#include <QMessageBox>

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


void MainWindow::on_pushButton_clicked()
{
    if(tabela.TAMVERTICE > 0){
        ui->treeWidget->setColumnCount(tabela.TAMVERTICE);
        QStringList lables;
        lables << "Vertice";
        for(int i = 1; i < tabela.TAMVERTICE; i++){
            lables = lables << QString::number(i);
        }
        ui->treeWidget->setHeaderLabels(lables);
        ui->treeWidget->clear();
    }

    for(int i = 0; i < tabela.TAMVERTICE ; i++){

        if(tabela.VetorTabela[i].tam > 0){

            QTreeWidgetItem *root = new QTreeWidgetItem(ui->treeWidget);
            root->setText(0, QString::number(i));
            for(int j = 1; j <= tabela.VetorTabela[i].tam; j++){
                root->setText(j, "V[" + QString::number(tabela.VetorTabela[i].it->dado.vertice) + "]" + " - " + "P["+QString::number(tabela.VetorTabela[i].it->dado.peso)+"]");
                ui->treeWidget->addTopLevelItem(root);
                tabela.VetorTabela[i].itPP();
            }
            tabela.VetorTabela[i].itHead();
        }else{
            QTreeWidgetItem *root = new QTreeWidgetItem(ui->treeWidget);
            root->setText(0, QString::number(i));
            ui->treeWidget->addTopLevelItem(root);
        }

    }

}



void MainWindow::on_btn_consultar_clicked()
{

    //ui->treeWidget->setColumnCount(2);
    QStringList lables;
    lables <<"Vertices";
    ui->treeWidget->setHeaderLabels(lables);
    int vertice = ui->entrada_consulta->text().toInt();



    if(tabela.TAMVERTICE > -1 && vertice < tabela.TAMVERTICE){
        ui->treeWidget->clear();
            QTreeWidgetItem *root = new QTreeWidgetItem(ui->treeWidget);
            root->setText(0, QString::number(vertice)); //vetor_alunos.alunoVetor[i].it->aluno.matricula

            for(int j = 0; j < tabela.VetorTabela[vertice].tam; j++){

                root->setText(j + 1, QString::number(tabela.VetorTabela[vertice].it->dado.vertice) + " - " + QString::number(tabela.VetorTabela[vertice].it->dado.peso));
                ui->treeWidget->addTopLevelItem(root);
                tabela.VetorTabela[vertice].itPP();

            }
            tabela.VetorTabela[vertice].itHead();

    }else{
            //vertice invalido
    }

}


void MainWindow::on_btn_ligacao_clicked(){

    int vertice = ui->entrada_vertice->text().toInt();
    int ligacao = ui->entrada_ligacao->text().toInt();
    int peso = ui->entrada_peso->text().toInt();

    if(tabela.TAMVERTICE > 0){
        if(tabela.insertion(vertice, ligacao, peso, tabela.TAMVERTICE)){

                QMessageBox messageBox;
                messageBox.setText("ligação");
                messageBox.setIcon(QMessageBox::Information);
                messageBox.exec();
                on_pushButton_clicked();
        }else{
                QMessageBox messageBox;
                messageBox.setText("Vertice invalido!");
                messageBox.setIcon(QMessageBox::Critical);
                messageBox.exec();
        }
    }else{
        QMessageBox messageBox;
        messageBox.setText("Vertice não declarado!");
        messageBox.setIcon(QMessageBox::Critical);
        messageBox.exec();
    }
}



void MainWindow::on_btn_alterar_clicked()
{

    int vertice = ui->alterar_vertice->text().toInt();
    int ligacao = ui->alterar_ligacao->text().toInt();
    int nova_ligacao = ui->alterar_novaligacao->text().toInt();
    int peso = ui->alterar_peso->text().toInt();



    if(tabela.TAMVERTICE > 0){
        if(tabela.alteracao(vertice, ligacao, nova_ligacao, peso, tabela.TAMVERTICE)){



            on_pushButton_clicked();
            QMessageBox messageBox;
            messageBox.setText("aluno alterado!");
            messageBox.setIcon(QMessageBox::Information);
            messageBox.exec();
        }else{
                QMessageBox messageBox;
                messageBox.setText("alteração invalida!");
                messageBox.setIcon(QMessageBox::Critical);
                messageBox.exec();
        }
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

    if(tabela.TAMVERTICE > 0){

    if(tabela.VetorTabela[vertice].tam != 0 && ligacao > -1 && ligacao < tabela.TAMVERTICE){


    while(tabela.VetorTabela[vertice].it->dado.vertice != ligacao && tabela.VetorTabela[vertice].it->next != tabela.VetorTabela[vertice].head){
        tabela.VetorTabela[vertice].itPP();
    }


    if(tabela.VetorTabela[vertice].it->dado.vertice == ligacao){

        if(tabela.remover(tabela.VetorTabela[vertice])){

            tabela.VetorTabela[vertice].itHead();

            while(tabela.VetorTabela[ligacao].it->dado.vertice != vertice && tabela.VetorTabela[ligacao].it->next != tabela.VetorTabela[ligacao].head){
                tabela.VetorTabela[ligacao].itPP();
            }
            tabela.remover(tabela.VetorTabela[ligacao]);
            tabela.VetorTabela[ligacao].itHead();

                QMessageBox messageBox;
                messageBox.setText("Ligação removido!");
                messageBox.setIcon(QMessageBox::Information);
                messageBox.exec();
        }else{
                QMessageBox messageBox;
                messageBox.setText("remoção invalida!");
                messageBox.setIcon(QMessageBox::Critical);
                messageBox.exec();
        }
    }
    else{
                QMessageBox messageBox;
                messageBox.setText("Ligação não encontrado!");
                messageBox.setIcon(QMessageBox::Critical);
                messageBox.exec();
        }
    tabela.VetorTabela[vertice].itHead();
    on_pushButton_clicked();
    }else{
        QMessageBox messageBox;
        messageBox.setText("Ligação não encontrado!");
        messageBox.setIcon(QMessageBox::Critical);
        messageBox.exec();
    }
    }else{
    QMessageBox messageBox;
    messageBox.setText("Vertice não declarado!");
        messageBox.setIcon(QMessageBox::Critical);
    messageBox.exec();
    }
}



void MainWindow::on_btn_entrada_clicked()
{
    int tam = ui->entrada_quantidade->text().toInt();
    tabela.CreateTabela(tam);
    on_pushButton_clicked();
}

