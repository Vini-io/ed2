#include "mainwindow.h"
#include "tratamentoarquivo.h"
#include "ui_mainwindow.h"
#include "vectorprofessor.h"


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



void MainWindow::displayTree()
{
    profVector = VINI::VectorProfessor();
    VINI::tratamentoArquivo arq;
    arq.tratarArquivo(profVector);
    ui->treeWidget->setColumnCount(5);
    QStringList lables;
    lables << "Matricula" <<"Nome"<<"Departamento"<<"Titulação"<<"Tipo de contrado";
    ui->treeWidget->setHeaderLabels(lables);

    for(size_t i = 0; i < profVector.vectorProf.size(); i++){
        QTreeWidgetItem *root = new QTreeWidgetItem(ui->treeWidget);
        root->setText(0, QString::number(profVector.vectorProf[i].amountMatricula));
        root->setText(1, profVector.vectorProf[i].nome);
        root->setText(2, profVector.vectorProf[i].depart);
        root->setText(3, profVector.vectorProf[i].titulacao);
        root->setText(4, profVector.vectorProf[i].typeContrato);
        ui->treeWidget->addTopLevelItem(root);
    }

/*


    std::string pathFolder = "C:/Users/barbo/Documents/atividades/ED2_05/05/DocentesEscolaBD_TESTE_V1.csv";
    std::ifstream arquivo;

    std::string pathFolderErro = "C:/Users/barbo/Documents/atividades/ED2_05/05/err.log";
    std::ofstream erro;



    erro.open(pathFolderErro, std::ios::app);
    arquivo.open(pathFolder);

    std::string attr, attr2;

    if(arquivo.is_open()){
        profVector = VINI::VectorProfessor();

        while(std::getline(arquivo, attr)){

            std::stringstream attrString(attr);
            objProfessor = new VINI::professor();

            attr2 = "";
            int n = 4;

            while(std::getline(attrString, attr2, ';')){
                n = (n + 1) % 5;
                if(attr2 != ""){
                    objProfessor->createProfessor(n, QString::fromStdString(attr2));
                }
            }

            if(objProfessor->checkerErroProfessor() || objProfessor->amountCharNome < 4){
                // ALOCAR ERRO PARA UM .LOG

                erro << objProfessor->matricula;
                erro << " " + objProfessor->nome.toStdString()+ " ";
                erro << objProfessor->depart.toStdString() + " ";
                erro << objProfessor->titulacao.toStdString() + " ";
                erro << objProfessor->typeContrato.toStdString() + "\n";

            }else{
                //ALOCAR OBJPROFESSOR NO VECTOR
                profVector.addProfVector(*objProfessor); // add objprof no array
            }
        }

    }else{
        QMessageBox messageBox;
        messageBox.setText("ERRO ARQUIVO");
        messageBox.setIcon(QMessageBox::Critical);
        messageBox.exec();
    }


    erro.close();
    arquivo.close();



    ui->treeWidget->setColumnCount(5);

    QStringList lables;
    lables << "Matricula" <<"Nome"<<"Departamento"<<"Titulação"<<"Tipo de contrado";

    ui->treeWidget->setHeaderLabels(lables);


    for(size_t i = 0; i < profVector.vectorProf.size(); i++){
        QTreeWidgetItem *root = new QTreeWidgetItem(ui->treeWidget);
        root->setText(0, QString::number(profVector.vectorProf[i].matricula));
        root->setText(1, profVector.vectorProf[i].nome);
        root->setText(2, profVector.vectorProf[i].depart);
        root->setText(3, profVector.vectorProf[i].titulacao);
        root->setText(4, profVector.vectorProf[i].typeContrato);
        ui->treeWidget->addTopLevelItem(root);
    }
*/
}



void MainWindow::on_box_valor_activated(int index)
{
    try{
        ui->treeWidget->clear();
        int pos;
        if(index == 0){
            //busca sequencial nome

            profVector.OrderNome();

            QString value = ui->input_valor->text();
            pos = search.BuscaSequencialNome(value, profVector);

        }
        else if(index == 1){
            //busca sequencial matric
            profVector.OrderMatricula();

            int value = ui->input_valor->text().toInt();
            pos = search.BuscaSequencialMatricula(value, profVector);


        }else if(index == 2){
            // busca binaria por nome
            profVector.OrderNome();
            QString value = ui->input_valor->text();
            pos = search.BuscaBinariaNome(value, profVector);

        }else {
            // busca binaria por matricula
            profVector.OrderMatricula();
            int value = ui->input_valor->text().toInt();
            pos = search.BuscaBinarioMatricula(value, profVector.vectorProf.size(), profVector);

        }

        if(pos > -1){
            QTreeWidgetItem *root = new QTreeWidgetItem(ui->treeWidget);
            root->setText(0, QString::number(profVector.vectorProf[pos].amountMatricula));
            root->setText(1, profVector.vectorProf[pos].nome);
            root->setText(2, profVector.vectorProf[pos].depart);
            root->setText(3, profVector.vectorProf[pos].titulacao);
            root->setText(4, profVector.vectorProf[pos].typeContrato);
        }else{

            QMessageBox messageBox;
            messageBox.setText("Professor não encontrado!!");
            messageBox.setIcon(QMessageBox::Information);
            messageBox.exec();
        }


    }catch(QString& erro){
        QMessageBox messageBox;
        messageBox.setText("erro não consegue fazer busca");
        messageBox.setIcon(QMessageBox::Information);
        messageBox.exec();
    }
}
void MainWindow::on_box_order_activated(int index){
    try{
            ui->treeWidget->clear();
            if(index == 0) profVector.OrderMatricula();
            else if(index == 1) profVector.OrderNome();
            else if(index == 2) profVector.OrderDerpat();
            else if(index == 3) profVector.OrderTitulacao();
            else if(index == 4) profVector.Ordertype();
            else if(index == 5) profVector.OrderDerpatTitNome();
            else profVector.OrderDerpatTypeNome();

            for(size_t i = 0; i < profVector.vectorProf.size(); i++){
                QTreeWidgetItem *root = new QTreeWidgetItem(ui->treeWidget);
                root->setText(0, QString::number(profVector.vectorProf[i].amountMatricula));
                root->setText(1, profVector.vectorProf[i].nome);
                root->setText(2, profVector.vectorProf[i].depart);
                root->setText(3, profVector.vectorProf[i].titulacao);
                root->setText(4, profVector.vectorProf[i].typeContrato);
                ui->treeWidget->addTopLevelItem(root);
            }

    }catch(QString& erro){
            QMessageBox messageBox;
            messageBox.setText("erro na ordenação: " + erro);
            messageBox.setIcon(QMessageBox::Information);
            messageBox.exec();
    }
}
