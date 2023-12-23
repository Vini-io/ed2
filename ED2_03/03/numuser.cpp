#include "numuser.h"

namespace VINI{

numuser::numuser(int tamP)
    : tam(0),
    array(nullptr)
{
    if (tamP <= 0) throw QString("Erro na digitação, por favor insira um numero inteiro valido ");
    try {
        array = new int[tamP];
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
        array[i] = distr(gen);
    }
}

int numuser::getElement(int indice)
{
    if(indice >= 0 && indice < tam) return array[indice];
    else throw QString("Indice encontra-se fora dos limites permitidos");
}

int numuser::accessPosArray(int value)
{
    for(int i = 0; i < tam; i++){
        if(array[i] > value) break;
        else if(value == array[i]) return i;
    }
    throw QString ("Elemento nao existe");
}



void numuser::selectionSort(){

    for(int step = 0; step < tam - 1; step++){
        int min_idx = step;
        for(int i = step + 1; i < tam; i++){
            if(array[i] < array[min_idx]){
                min_idx = i;
            }
        }
        int temp = array[step];
        array[step] = array[min_idx];
        array[min_idx] = temp;
    }

}



}
