#ifndef MATRIZ_GRAFO_H
#define MATRIZ_GRAFO_H
#include "etiqueta.h"
#include <iostream>
#include <QString>
#include <QMessageBox>
class matriz_grafo
{
public:
    int **grafo;
    Etiqueta **grafo_etiqueta;

    int tam;
    matriz_grafo(int tamP);
    ~matriz_grafo();

    bool createEtiqueta(int inicio);

    bool insertGrafo(int vertice, int ligacao, int peso);
    bool alterarGrafo(int vertice, int ligacao, int newLigacao, int newPeso);
    bool excluirGrafo(int vertice, int ligacao);
};

#endif // MATRIZ_GRAFO_H
