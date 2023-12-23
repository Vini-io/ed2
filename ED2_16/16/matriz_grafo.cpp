#include "matriz_grafo.h"
#include "list.h"


matriz_grafo::matriz_grafo(int tamP): tam(0)
{
    try{
        tam = tamP;
        grafo = new int*[tam];
        grafo_etiqueta = new Etiqueta*[tam];

        for(int i = 0; i < tam; i++){
            grafo[i] = new int[tam];
            grafo_etiqueta[i] = new Etiqueta[tam];
        }

        for (int i = 0; i < tam; ++i) {
            for (int j = 0; j < tam; ++j) {
                grafo[i][j] = 0;
                Etiqueta nullEtiqueta = Etiqueta();
                grafo_etiqueta[i][j] = nullEtiqueta;
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

bool matriz_grafo::createEtiqueta(int inicio)
{
    list listEtiqueta = list();

    grafo_etiqueta[inicio][inicio].SV = "V";
    int smallerEtiqueta;
    int it = inicio;
    bool veryFinal = false;

    while(!veryFinal){

        for(int ligacao = 0; ligacao < tam; ligacao++){
                        //
            if(grafo[it][ligacao] && grafo_etiqueta[it][ligacao].SV == "F" && ligacao != inicio){ // não tenho certeza se isso vai dar certo


                Etiqueta* etiqueta = new Etiqueta();
                etiqueta->CA = grafo_etiqueta[ligacao][it].CA + grafo[it][ligacao];
                etiqueta->VP = it;
                etiqueta->QAV = grafo_etiqueta[it][it].QAV + 1;
                etiqueta->SV = "F";

                /*
                QMessageBox messageBox;
                messageBox.setText(QString::number(grafo_etiqueta[it][ligacao].VP) + " V: "+ QString::number(ligacao) + "  SV: " + grafo_etiqueta[it][ligacao].SV);
                messageBox.setIcon(QMessageBox::Critical);
                messageBox.exec();
                */

                if(grafo_etiqueta[it][ligacao].VP == -1){




                    grafo_etiqueta[it][ligacao] = *etiqueta;
                    //grafo_etiqueta[ligacao][ligacao] = *etiqueta;
                    grafo_etiqueta[ligacao][it] = *etiqueta;
                    listEtiqueta.InsertNext(ligacao);

                    QMessageBox messageBox;
                    messageBox.setText( " old: "+QString::number(grafo_etiqueta[it][ligacao].CA)+ " " + QString::number(grafo_etiqueta[it][ligacao].VP)+" " + QString::number(grafo_etiqueta[it][ligacao].QAV) + " " + grafo_etiqueta[it][ligacao].SV + "         New Etiqueta: "+ QString::number(etiqueta->CA) + "  " + QString::number(etiqueta->VP) + "  " + QString::number(etiqueta->QAV) + "  " + etiqueta->SV);
                    messageBox.setIcon(QMessageBox::Critical);
                    messageBox.exec();

                }else if(etiqueta->CA < grafo_etiqueta[it][ligacao].CA){


                    QMessageBox messageBox;
                    messageBox.setText( " old: "+QString::number(grafo_etiqueta[it][ligacao].CA)+ " " + QString::number(grafo_etiqueta[it][ligacao].VP)+" " + QString::number(grafo_etiqueta[it][ligacao].QAV) + " " + grafo_etiqueta[it][ligacao].SV + "         New Etiqueta: "+ QString::number(etiqueta->CA) + "  " + QString::number(etiqueta->VP) + "  " + QString::number(etiqueta->QAV) + "  " + etiqueta->SV);
                    messageBox.setIcon(QMessageBox::Critical);
                    messageBox.exec();

                    grafo_etiqueta[it][ligacao] = *etiqueta;
                    grafo_etiqueta[ligacao][it] = *etiqueta;
                    listEtiqueta.InsertNext(ligacao);
                }
            }
        }

        bool nextHas = true;
        listEtiqueta.itHead();
        smallerEtiqueta = listEtiqueta.it->vertice;

        while(nextHas){

            if(!listEtiqueta.itPP()) nextHas = false;

            if(grafo_etiqueta[smallerEtiqueta][smallerEtiqueta].CA > grafo_etiqueta[listEtiqueta.it->vertice][listEtiqueta.it->vertice].CA){
                QMessageBox messageBox;
                messageBox.setText("it antigo: " + QString::number(it));
                messageBox.setIcon(QMessageBox::Critical);
                messageBox.exec();

                it = smallerEtiqueta = listEtiqueta.it->vertice;

                messageBox.setText("it new: " + QString::number(it));
                messageBox.setIcon(QMessageBox::Critical);
                messageBox.exec();
                nextHas = false;
            }
        }

        grafo_etiqueta[smallerEtiqueta][smallerEtiqueta].SV = "V";
        listEtiqueta.Erase();


        if(listEtiqueta.tam == 0) veryFinal = true;

    }

    return true;
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
