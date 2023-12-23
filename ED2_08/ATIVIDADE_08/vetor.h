#ifndef VETOR_H
#define VETOR_H
#include <QString>

namespace VINI {

class vetor{
public:
    int *array, *arraySelection, *arrayInsertion, *arrayBubble, tam, excSelection, excInsertion, excBubble;
    vetor(int TAM);
    ~vetor();
    void insertArray();
    int getElementArray(int i, int arr);
    void selectionSort();
    void insertionSort();
    void bubbleSort();

};
}

#endif // VETOR_H
