#ifndef VETOR_H
#define VETOR_H
#include <QString>

namespace VINI {

class vetor{
public:
    int *array, *arraySelection, *arrayInsertion, *arrayBubble, *arrayMerge, *arrayHeap,*arrayQuick, tam, excSelection, excInsertion, excBubble, execMerge, execHeap, execQuick;
    vetor(int TAM);
    ~vetor();
    void insertArray();
    int getElementArray(int i, int arr);
    void selectionSort();
    void insertionSort();
    void bubbleSort();
    void mergeSort(int left, int right);
    void merge(int left, int middle, int right);

    void heapif(int n, int i);
    void heapSort();

    void quickSort(int low, int high);
    int partition(int low, int high);
    void swap(int* a, int* b);

};
}

#endif // VETOR_H
