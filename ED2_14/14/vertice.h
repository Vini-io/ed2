#ifndef VERTICE_H
#define VERTICE_H

#include <QString>
namespace VN{

class Vertice{
public:
    int vertice;
    int peso;

    Vertice(): vertice(0), peso(0){};
    void createObj(int verticeP, int pesoP){
        vertice = verticeP;
        peso = pesoP;
    };
};
}

#endif // VERTICE_H
