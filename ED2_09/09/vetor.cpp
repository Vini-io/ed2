#include "vetor.h"
#include <random>
#include <chrono>

namespace VINI {


vetor::vetor(int TAM) : array(nullptr), arraySelection(nullptr), arrayInsertion(nullptr), arrayBubble(nullptr), arrayMerge(nullptr), tam(0), excSelection(0), excInsertion(0), excBubble(0), execMerge(0){

    if(TAM < 1) throw QString("Erro na digitação, por favor insira um numero inteiro valido ");

    try{
        array = new int[TAM];
        arraySelection = new int[TAM];
        arrayInsertion = new int[TAM];
        arrayBubble = new int[TAM];
        arrayMerge = new int[TAM];

        tam = TAM;
    }catch(QString &err){
        throw QString("Erro na alocação de memória ");
    }
}

vetor::~vetor(){
    delete []array;
}

void vetor::insertArray(){

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 gen(seed);
    std::uniform_int_distribution<> distr(0, 1000);
    for(int i = 0; i < tam; i++){
       arrayMerge[i] = arrayBubble[i] = arrayInsertion[i] = arraySelection[i] = array[i] = distr(gen);

    }
}

int vetor::getElementArray(int i, int arr){
    if(arr == 1) return array[i];
    else if(arr == 2) return arraySelection[i];
    else if(arr == 3) return arrayInsertion[i];
    else if(arr == 4) return arrayBubble[i];
    else if(arr == 5) return arrayMerge[i];
}

void vetor::selectionSort()
{
    for(int step = 0; step < tam - 1; step++){
        int min_idx = step;
        for(int i = step + 1; i < tam; i++){

            if(arraySelection[i] < arraySelection[min_idx]){
                excSelection = excSelection + 1;
                min_idx = i;
            }
        }

        int temp = arraySelection[step];
        arraySelection[step] = arraySelection[min_idx];
        arraySelection[min_idx] = temp;
    }
}

void vetor::insertionSort()
{
    for (int step = 1; step < tam; step++) {
        int key = arrayInsertion[step];
        int j = step - 1;

        while (key < arrayInsertion[j] && j >= 0) {
            arrayInsertion[j + 1] = arrayInsertion[j];
            --j;
            excInsertion = excInsertion + 1;
        }
        arrayInsertion[j + 1] = key;
    }
}

void vetor::bubbleSort()
{
    bool swapped;
    for (int i = 0; i < tam - 1; i++) {
        swapped = false;
        for (int j = 0; j < tam - i - 1; j++) {
            excBubble = excBubble + 1;
            if (arrayBubble[j] > arrayBubble[j + 1]) {

                int temp = arrayBubble[j];
                arrayBubble[j] = arrayBubble[j + 1];
                arrayBubble[j + 1] = temp;
                swapped = true;

            }
        }
        if (swapped == false) return;
    }
}

void vetor::mergeSort(int left, int right)
{
    if (left < right) {
        int middle = left + (right - left) / 2;

        mergeSort(left, middle);
        mergeSort(middle + 1, right);

        merge(left, middle, right);
    }
}

void vetor::merge(int left, int middle, int right)
{
    int n1 = middle - left + 1;
    int n2 = right - middle;

    std::vector<int> leftArray(n1);
    std::vector<int> rightArray(n2);

    for (int i = 0; i < n1; i++) {
        leftArray[i] = arrayMerge[left + i];
    }
    for (int j = 0; j < n2; j++) {
        rightArray[j] = arrayMerge[middle + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            arrayMerge[k] = leftArray[i];
            i++;
        } else {
            arrayMerge[k] = rightArray[j];
            j++;
        }
        k++;
        execMerge++;
    }

    while (i < n1) {
        arrayMerge[k] = leftArray[i];
        i++;
        k++;
        execMerge++;
    }

    while (j < n2) {
        arrayMerge[k] = rightArray[j];
        j++;
        k++;
        execMerge++;
    }
}

}

