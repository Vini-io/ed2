#include "numuser.h"

namespace VINI{

numuser::numuser(int tamP)
    :

    tam(0),
    array(nullptr),
    NO_ORDER_array(nullptr),
    exe1(0),
    exe2(0),
    exe3(0),
    exe4(0)


{
    if (tamP <= 0) throw QString("Erro na digitação, por favor insira um numero inteiro valido ");

    try {
        array = new int[tamP];
        NO_ORDER_array = new int[tamP];
        tam = tamP;

    } catch (std::bad_alloc &erro) {
        throw QString("Erro na alocação de memória ");
    }
}

numuser::~numuser()
{
    delete[] array;

}

void numuser::createArray()
{
    // Semente do relógio
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    // Criando o gerador de números aleatórios
    std::mt19937 gen(seed);

    // Criando a distribuição de valores
    std::uniform_int_distribution<> distr(0, 1000);
    for(int i = 0; i < tam; i++){
        NO_ORDER_array[i] = array[i] = distr(gen);
    }
}

int numuser::getElement(int indice)
{
    if(indice >= 0 && indice < tam) return array[indice];
    else throw QString("Indice encontra-se fora dos limites permitidos");
}

int numuser::accessPosArray(int value)
{
    exe3 = 0;

    for(int i = 0; i < tam; i++){
        exe3 = exe3 + 1;
        if(array[i] > value) break;
        else if(value == array[i]) return i;
    }
    throw QString ("Elemento nao existe");
}

int numuser::searchArrayNoOrder(int value)
{
    exe2 = 0;
    for(int i = 0; i < tam; i++){
        exe2 = exe2 + 1;
        if(value == NO_ORDER_array[i]) return i;
    }
    throw QString ("Elemento nao existe");

}

int numuser::searchArrayBinaria(int value)
{
    int low = 0, high = tam;
    exe4 = 0;
    while(low <= high){
        exe4 = exe4 + 1;
        int mid = (low + high)/2;

        if(array[mid] == value)
            return mid;
        if(array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}



void numuser::selectionSort(){
    exe1 = 0;
    for(int step = 0; step < tam - 1; step++){
        int min_idx = step;
        for(int i = step + 1; i < tam; i++){
            if(array[i] < array[min_idx]){
                exe1 = exe1 + 1;
                min_idx = i;
            }
        }
        int temp = array[step];
        array[step] = array[min_idx];
        array[min_idx] = temp;
    }

}



}
