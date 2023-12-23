#ifndef BUSCA_H
#define BUSCA_H

#include "vectorprofessor.h"
namespace VINI{
    class busca{
    public:


        int BuscaBinarioMatricula(int x, int tam, VectorProfessor profVector);
        int BuscaSequencialMatricula(int x, VectorProfessor profVector);

        int BuscaBinariaNome(QString value, VectorProfessor profVector);
        int BuscaSequencialNome(QString value, VectorProfessor profVector);

    };
}
#endif // BUSCA_H
