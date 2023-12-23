#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <iostream>
#include <QString>

namespace VINI{

class professor{
public:
    QString amountType;
    QString amountTitulacao;
    QString amountDepart;
    QString amountCharNome;
    int amountMatricula;
    QString OrderDepartNome;
    QString OrderTitulacaoNome;
    QString OrderTypeNome;
    QString OrderDepartTitNome;
    QString OrderDepartTypeNome;
    QString nome;
    QString depart;
    QString titulacao;
    QString typeContrato;
    professor();
    void createProfessor(int n, QString attr);
    bool checkerErroProfessor();


};

}
#endif // PROFESSOR_H
