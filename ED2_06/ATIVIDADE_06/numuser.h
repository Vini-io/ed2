#ifndef NUMUSER_H
#define NUMUSER_H

#include <random>
#include <chrono>
#include <QString>

namespace VINI{
class numuser{
private:
    int *array;
    int *NO_ORDER_array;
    int tam;
public:
    int exe1, exe2, exe3, exe4;
    numuser(int tamP);
    ~numuser();
    void createArray();
    int getElement(int indice);
    int accessPosArray(int value);
    int searchArrayNoOrder(int value);
    int searchArrayBinaria(int value);
    void selectionSort();
};
}

#endif // NUMUSER_H
