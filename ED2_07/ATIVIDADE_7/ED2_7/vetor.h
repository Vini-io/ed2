#ifndef VETOR_H
#define VETOR_H
#include <QString>

namespace VINI {

class vetor{
public:
    int *array, *arraySelection, *arrayInsertion, tam, excSelection, excInsertion;
    vetor(int TAM);
    ~vetor();
    void insertArray();
    int getElementArray(int i, int arr);
    void selectionSort();
    void insertionSort();

};
}

#endif // VETOR_H
