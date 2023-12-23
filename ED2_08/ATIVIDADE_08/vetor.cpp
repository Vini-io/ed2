#include "vetor.h"
#include <random>
#include <chrono>

namespace VINI {


vetor::vetor(int TAM) : array(nullptr), arraySelection(nullptr), arrayInsertion(nullptr), arrayBubble(nullptr), tam(0), excSelection(0), excInsertion(0), excBubble(0){

    if(TAM < 1) throw QString("Erro na digitação, por favor insira um numero inteiro valido ");

    try{
        array = new int[TAM];
        arraySelection = new int[TAM];
        arrayInsertion = new int[TAM];
        arrayBubble = new int[TAM];

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
       arrayBubble[i] = arrayInsertion[i] = arraySelection[i] = array[i] = distr(gen);

    }
}

int vetor::getElementArray(int i, int arr){
    if(arr == 1) return array[i];
    else if(arr == 2) return arraySelection[i];
    else if(arr == 3) return arrayInsertion[i];
    else return arrayBubble[i];
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

}

