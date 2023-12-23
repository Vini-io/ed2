#include "nunuser.h"

namespace VINI{

nunuser::nunuser(int tamP):tam(0), array(nullptr){

    if (tamP <= 0) throw QString("Erro na digitação, por favor insira um numero inteiro valido ");
    try {
        array = new int[tamP];
        tam = tamP;
    } catch (std::bad_alloc &erro) {
        throw QString("Erro na alocação de memória ");
    }
}

nunuser::~nunuser(){
    delete[] array;
}


}
