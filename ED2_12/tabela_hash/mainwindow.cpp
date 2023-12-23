#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    displayTree();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->treeWidget->setColumnCount(2);
    QStringList lables;
    lables << "Matricula" <<"Nome";
    ui->treeWidget->setHeaderLabels(lables);
    ui->treeWidget->clear();

    for(size_t i = 0; i < 1000 ; i++){
        //if(vetor_alunos.alunoVetor[i].matricula != -1){
            QTreeWidgetItem *root = new QTreeWidgetItem(ui->treeWidget);
            root->setText(0, QString::number(i));
            root->setText(1, vetor_alunos.alunoVetor[i].nome);
            ui->treeWidget->addTopLevelItem(root);
        //}
    }
}

void MainWindow::displayTree()
{
    vetor_alunos = VN::Vetor_alunos();
    VN::arquivo arq;
    arq.createVetorAluno(vetor_alunos);
    ui->treeWidget->setColumnCount(2);
    QStringList lables;
    lables << "Matricula" <<"Nome";
    ui->treeWidget->setHeaderLabels(lables);

    for(size_t i = 0; i < 1000 ; i++){
        //if(vetor_alunos.alunoVetor[i].matricula != -1 && vetor_alunos.alunoVetor[i].nome != ""){
            QTreeWidgetItem *root = new QTreeWidgetItem(ui->treeWidget);
            root->setText(0, QString::number(i));
            root->setText(1, vetor_alunos.alunoVetor[i].nome);
            ui->treeWidget->addTopLevelItem(root);
        //}

    }
}

void MainWindow::on_btn_consultar_clicked()
{

    ui->treeWidget->setColumnCount(2);
    QStringList lables;
    lables << "Matricula" <<"Nome";
    ui->treeWidget->setHeaderLabels(lables);
    int matr = ui->entrada_consulta->text().toInt();

    if((matr < 1000 && matr > -1) && (vetor_alunos.alunoVetor[matr].matricula != -1 && vetor_alunos.alunoVetor[matr].nome != "")){
            ui->treeWidget->clear();
            QTreeWidgetItem *root = new QTreeWidgetItem(ui->treeWidget);
            root->setText(0, QString::number(vetor_alunos.alunoVetor[matr].matricula));
            root->setText(1, vetor_alunos.alunoVetor[matr].nome);
            ui->treeWidget->addTopLevelItem(root);
        }else{
            QMessageBox messageBox;
            messageBox.setText("aluno não encontrado");
            messageBox.setIcon(QMessageBox::Critical);
            messageBox.exec();
        }
}


void MainWindow::on_btn_Inserir_clicked(){

    int matricula = ui->entrada_matricula->text().toInt();
    QString nome = ui->entrada_nome->text();

    if(vetor_alunos.insertion(matricula, nome)){

            QMessageBox messageBox;
            messageBox.setText("aluno inserido!");
            messageBox.setIcon(QMessageBox::Information);
            messageBox.exec();

    }else{

            QMessageBox messageBox;
            messageBox.setText("Matricula invalida!");
            messageBox.setIcon(QMessageBox::Critical);
            messageBox.exec();

    }

}





void MainWindow::on_pushButton_2_clicked()
{

    int matricula = ui->entrada_alteracao->text().toInt();
    int Nova_matricula = ui->nova_matricula->text().toInt();
    QString Novo_nome = ui->nova_nome->text();


    if(vetor_alunos.alteracao(matricula, Nova_matricula, Novo_nome)){
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

}


void MainWindow::on_btn_remover_clicked()
{
    int matricula = ui->entrada_remover->text().toInt();

    if(vetor_alunos.remove(matricula)){
            QMessageBox messageBox;
            messageBox.setText("aluno removido!");
            messageBox.setIcon(QMessageBox::Information);
            messageBox.exec();
    }else{
            QMessageBox messageBox;
            messageBox.setText("remoção invalida!");
            messageBox.setIcon(QMessageBox::Critical);
            messageBox.exec();
    }

}

