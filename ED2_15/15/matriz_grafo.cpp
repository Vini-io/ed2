#include "matriz_grafo.h"


matriz_grafo::matriz_grafo(int tamP): tam(0)
{
    try{
        tam = tamP;
        grafo = new int*[tam];

        for(int i = 0; i < tam; i++){
            grafo[i] = new int[tam];
        }

        for (int i = 0; i < tam; ++i) {
            for (int j = 0; j < tam; ++j) {
                grafo[i][j] = 0;
            }
        }

    }catch(std::bad_alloc &err){
        throw QString("Erro na alocação de memória");
    }
}

matriz_grafo::~matriz_grafo()
{
    for (int i = 0; i < tam; ++i) {
        delete[] grafo[i];
    }
    delete[] grafo;
}


bool matriz_grafo::insertGrafo(int vertice, int ligacao, int peso)
{
    if(vertice < tam && vertice > -1 && ligacao < tam && ligacao > -1){
        if(peso > 0){

            if(grafo[vertice][ligacao] == 0){
                grafo[vertice][ligacao] = peso;
                grafo[ligacao][vertice] = peso;
                return true;
            }
            QMessageBox messageBox;
            messageBox.setText("já existe ligação de vertices");
            messageBox.setIcon(QMessageBox::Critical);
            messageBox.exec();
            return false;

        }else{
            QMessageBox messageBox;
            messageBox.setText("Peso invalido!");
            messageBox.setIcon(QMessageBox::Critical);
            messageBox.exec();
            return false;
        }
    }
    /*
    QMessageBox messageBox;
    messageBox.setText("Vertice invalido");
    messageBox.setIcon(QMessageBox::Critical);
    messageBox.exec();
    */
    return false;
}

bool matriz_grafo::alterarGrafo(int vertice, int ligacao, int newLigacao, int newPeso)
{




    if(vertice < tam && ligacao < tam && vertice > -1 && ligacao > -1){



            if(newPeso > 0){

                if(grafo[vertice][ligacao] != 0 && grafo[vertice][newLigacao] == 0){ /////

                    grafo[vertice][ligacao] = 0;
                    grafo[ligacao][vertice] = 0;

                    grafo[vertice][newLigacao] = newPeso;
                    grafo[newLigacao][vertice] = newPeso;

                    return true;
                }
            }else{
                QMessageBox messageBox;
                messageBox.setText("Peso invalido!");
                messageBox.setIcon(QMessageBox::Critical);
                messageBox.exec();
                return false;
            }

    }

    return false;
}

bool matriz_grafo::excluirGrafo(int vertice, int ligacao)
{
    if(grafo[vertice][ligacao] != 0){
            grafo[vertice][ligacao]= 0;
            grafo[ligacao][vertice] = 0;

            return true;
    }

    return false;
}
