#include "vectorprofessor.h"



namespace VINI {


void VectorProfessor::OrderMatricula()
{

    for(size_t step = 0; step < vectorProf.size() - 1; step++){
        int min_idx = step;
        for(size_t i = step; i < vectorProf.size(); i++){
            if(vectorProf[i].amountMatricula < vectorProf[min_idx].amountMatricula){
                min_idx = i;
            }
        }
        professor temp = vectorProf[step];
        vectorProf[step] = vectorProf[min_idx];
        vectorProf[min_idx] = temp;
    }
}

void VectorProfessor::OrderNome(){

    for(size_t step = 0; step < vectorProf.size() - 1; step++){
        int min_idx = step;
        for(size_t i = step; i < vectorProf.size(); i++){
            if(vectorProf[i].amountCharNome < vectorProf[min_idx].amountCharNome){
                min_idx = i;
            }
        }
        professor temp = vectorProf[step];
        vectorProf[step] = vectorProf[min_idx];
        vectorProf[min_idx] = temp;
    }

}

void VectorProfessor::OrderDerpat(){

    for(size_t step = 0; step < vectorProf.size() - 1; step++){
        int min_idx = step;
        for(size_t i = step; i < vectorProf.size(); i++){
            if(vectorProf[i].OrderDepartNome < vectorProf[min_idx].OrderDepartNome){
                min_idx = i;
            }
        }
        professor temp = vectorProf[step];
        vectorProf[step] = vectorProf[min_idx];
        vectorProf[min_idx] = temp;
    }

}

void VectorProfessor::OrderTitulacao(){

    for(size_t step = 0; step < vectorProf.size() - 1; step++){
        int min_idx = step;
        for(size_t i = step; i < vectorProf.size(); i++){
            if(vectorProf[i].OrderTitulacaoNome < vectorProf[min_idx].OrderTitulacaoNome){
                min_idx = i;
            }
        }
        professor temp = vectorProf[step];
        vectorProf[step] = vectorProf[min_idx];
        vectorProf[min_idx] = temp;
    }

}


void VectorProfessor::Ordertype(){

    for(size_t step = 0; step < vectorProf.size() - 1; step++){
        int min_idx = step;
        for(size_t i = step; i < vectorProf.size(); i++){
            if(vectorProf[i].OrderTypeNome < vectorProf[min_idx].OrderTypeNome){
                min_idx = i;
            }
        }
        professor temp = vectorProf[step];
        vectorProf[step] = vectorProf[min_idx];
        vectorProf[min_idx] = temp;
    }

}



void VectorProfessor::OrderDerpatTitNome(){

    for(size_t step = 0; step < vectorProf.size() - 1; step++){
        int min_idx = step;
        for(size_t i = step; i < vectorProf.size(); i++){
            if(vectorProf[i].OrderDepartTitNome < vectorProf[min_idx].OrderDepartTitNome){
                min_idx = i;
            }
        }
        professor temp = vectorProf[step];
        vectorProf[step] = vectorProf[min_idx];
        vectorProf[min_idx] = temp;
    }

}


void VectorProfessor::OrderDerpatTypeNome(){

    for(size_t step = 0; step < vectorProf.size() - 1; step++){
        int min_idx = step;
        for(size_t i = step; i < vectorProf.size(); i++){
            if(vectorProf[i].OrderDepartTypeNome < vectorProf[min_idx].OrderDepartTypeNome){
                min_idx = i;
            }
        }
        professor temp = vectorProf[step];
        vectorProf[step] = vectorProf[min_idx];
        vectorProf[min_idx] = temp;
    }

}


void VectorProfessor::addProfVector(professor prof){
        vectorProf.push_back(prof);
    }

}

