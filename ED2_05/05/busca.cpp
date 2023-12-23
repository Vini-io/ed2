#include "busca.h"
#include <QMessageBox>
namespace VINI{



    int busca::BuscaBinarioMatricula(int x, int tam, VectorProfessor profVector){

        int low = 0, high = tam;

        while(low <= high){
            int mid = (low + high)/2;
            if(profVector.vectorProf[mid].amountMatricula == x) return mid;
            if(profVector.vectorProf[mid].amountMatricula < x) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }

    int busca::BuscaSequencialMatricula(int x, VectorProfessor profVector){

        for(size_t i = 0; i < profVector.vectorProf.size(); i++){
            if(x == profVector.vectorProf[i].amountMatricula){
                return i;
            }
        }
        return -1;
    }



    int busca::BuscaBinariaNome(QString value, VectorProfessor profVector){

        QString valueComp = "";
        for(int i = 0; i < value.length(); i++){
            valueComp = valueComp + QString::number(value.at(i).unicode());
        }

        int low = 0, high = profVector.vectorProf.size();

        while(low <= high){
            int mid = (low + high)/2;
            if(profVector.vectorProf[mid].amountCharNome == valueComp) return mid;
            if(profVector.vectorProf[mid].amountCharNome < valueComp) low = mid + 1;
            else high = mid - 1;
        }
        return -1;

    }

    int busca::BuscaSequencialNome(QString value, VectorProfessor profVector){
        QString valueComp = "";
        for(int i = 0; i < value.length(); i++){
            valueComp = valueComp + QString::number(value.at(i).unicode());
        }

        for(size_t i = 0; i < profVector.vectorProf.size(); i++){
            if( value == profVector.vectorProf[i].nome){
                return i;
            }
            if(profVector.vectorProf[i].amountCharNome > valueComp) return -1;
        }
        return -1;
    }

}
