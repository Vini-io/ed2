#include "vetor_alunos.h"
#include <QMessageBox>

VN::Vetor_alunos::Vetor_alunos() : alunoVetor(nullptr), QAlunos(0)
{
    try {
        alunoVetor = new Aluno[1000];
    } catch (std::bad_alloc &err) {
         throw QString("Erro na alocação de memória ");
    }

}

bool VN::Vetor_alunos::alteracao(int pos, int newMat, QString newNome)
{

    if(newMat == 0)newMat = pos;

    if(((alunoVetor[pos].matricula != -1 && alunoVetor[pos].nome != "") && alunoVetor[newMat].matricula == -1) || newMat == pos){
         alunoVetor[pos].matricula = -1;
         alunoVetor[pos].nome = "";

         alunoVetor[newMat].matricula = newMat;
         alunoVetor[newMat].nome = newNome;

         return true;
    }
    return false;
}

bool VN::Vetor_alunos::insertion(int pos, QString aluno)
{

    if(alunoVetor[pos].nome == "" && alunoVetor[pos].matricula == -1){
         VN::Aluno *objAluno = new Aluno();
         objAluno->createAluno(pos, aluno);
        alunoVetor[pos] = *objAluno;
        return true;
    }
    return false;
}

bool VN::Vetor_alunos::remove(int pos)
{
    if(alunoVetor[pos].matricula != -1){
        alunoVetor[pos].matricula = -1;
        alunoVetor[pos].nome = "";
        return true;
    }
    return false;
}

