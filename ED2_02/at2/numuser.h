#ifndef NUMUSER_H
#define NUMUSER_H

#include <random>
#include <chrono>
#include <QString>

namespace VINI{
    class numuser{
    private:
        int *array;
        int tam;
    public:
        numuser(int tamP);
        ~numuser();
        void createArray();
        int getElement(int indice);
        int accessPosArray(int value);

    };
}
#endif // NUMUSER_H
