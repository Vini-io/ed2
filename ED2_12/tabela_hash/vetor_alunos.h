#ifndef VETOR_ALUNOS_H
#define VETOR_ALUNOS_H
#include "aluno.h"


namespace VN {
class Vetor_alunos{
public:
    Aluno *alunoVetor;
    int QAlunos;

    Vetor_alunos();
    bool alteracao(int pos, int newMat, QString newNome);
    bool insertion(int pos, QString aluno);
    bool remove(int pos);
};
}


#endif // VETOR_ALUNOS_H
