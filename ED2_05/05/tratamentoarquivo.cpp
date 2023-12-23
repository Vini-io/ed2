#include "tratamentoarquivo.h"

namespace VINI{

void tratamentoArquivo::tratarArquivo(VectorProfessor &profVector)
{

    std::string pathFolder = "C:/Users/vini/Desktop/atividades/ED2_05/05/DocentesEscolaBD_TESTE_V1.csv";
    std::ifstream arquivo;

    std::string pathFolderErro = "C:/Users/vini/Desktop/atividades/ED2_05/05ED2_05/05/err.log";
    std::ofstream erro;



    erro.open(pathFolderErro, std::ios::app);
    arquivo.open(pathFolder);

    std::string attr, attr2;

    if(arquivo.is_open()){

        profVector = VINI::VectorProfessor();

        while(std::getline(arquivo, attr)){

            std::stringstream attrString(attr);
            //objProfessor = new VINI::professor();
            VINI::professor *objProfessor = new professor;

            attr2 = "";
            int n = 4;

            while(std::getline(attrString, attr2, ';')){
                n = (n + 1) % 5;
                if(attr2 != ""){
                    objProfessor->createProfessor(n, QString::fromStdString(attr2));
                }
            }

            if(objProfessor->checkerErroProfessor() || objProfessor->amountCharNome < "4"){
                // ALOCAR ERRO PARA UM .LOG

                erro << objProfessor->amountMatricula;
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




}



}


