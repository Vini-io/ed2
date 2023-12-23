#include "professor.h"
#include <iostream>
#include <QString>

#include <QMessageBox>

namespace VINI {
    professor::professor(){
        amountMatricula = 0;
        OrderTypeNome = OrderTitulacaoNome  = amountType = amountDepart = amountTitulacao = OrderDepartNome = amountCharNome = nome = depart = titulacao = typeContrato = "";
    }
    void professor::createProfessor(int n, QString attr){

        if(n == 0){
            // matricula
            amountMatricula = attr.toInt();
        }else if(n == 1){
            //Nome VV
            for(int i = 0; i < attr.length(); i++){
                amountCharNome = amountCharNome + QString::number(attr.at(i).unicode());
            }
            nome = attr;

        }else if(n == 2){
            //Departamento VV


            for(int i = 0; i < attr.length(); i++){
                amountDepart = amountDepart + QString::number(attr.at(i).unicode());
            }
            depart = attr;
            OrderDepartNome = amountDepart + amountCharNome;

            /*

            QChar caracter1 = attr.at(0);
            QChar caracter2 = attr.at(1);

            if(attr.length() > 2){

                QChar caracter3 = attr.at(2);
                int num1 = caracter1.unicode();
                int num2 = caracter2.unicode();
                int num3 = caracter3.unicode();

                QString numString1 = QString::number(num1);
                QString numString2 = QString::number(num2);
                QString numString3 = QString::number(num3);
                QString resoltString = numString1 + numString2 + numString3;
                amountDepart = resoltString.toInt();;

                QString Juncao = resoltString + amountCharNome;
                OrderDepartNome = Juncao.toInt();
            }else{
                int num1 = caracter1.unicode();
                int num2 = caracter2.unicode();
                QString numString1 = QString::number(num1);
                QString numString2 = QString::number(num2);
                QString resoltString = numString1 + numString2;
                DepartDec = resoltString.toInt();;

                QString Juncao = resoltString + amountCharNome;
                OrderDepartNome = Juncao.toInt();
            }

            */

        }else if(n == 3){

            //titulação

            for(int i = 0; i < attr.length(); i++){
                amountTitulacao = amountTitulacao + QString::number(attr.at(i).unicode());
            }
            titulacao = attr;

            OrderTitulacaoNome = amountTitulacao + amountCharNome;
            OrderDepartTitNome = amountDepart + amountTitulacao + amountCharNome;



            /*
            QChar caracter1 = attr.at(0);
            QChar caracter2 = attr.at(1);

            int num1 = caracter1.unicode();
            int num2 = caracter2.unicode();

            QString numString1 = QString::number(num1);
            QString numString2 = QString::number(num2);
            QString resoltString = numString1 + numString2;
            amountTitulacao = resoltString.toInt();



            QString Juncao = resoltString + amountCharNome;
            OrderTitulacaoNome = Juncao.toInt();
            OrderDepartTitNome = QString::number(DepartDec) + resoltString + amountCharNome;
           */


        }else if(n == 4){
            //tipo de contrado

            for(int i = 0; i < attr.length(); i++){
                amountType = amountType + QString::number(attr.at(i).unicode());
            }

            typeContrato = attr;

            OrderTypeNome = amountType + amountCharNome;
            OrderDepartTypeNome = amountDepart + amountType + amountCharNome;

            /*
            QString Juncao = QString::number(attr.length()) + amountCharNome;
            OrderTypeNome = Juncao.toInt();
            OrderDepartTypeNome = QString::number(DepartDec) + QString::number(attr.length()) + amountCharNome;

            */
        }
    }
    bool professor::checkerErroProfessor(){

        QString carc = nome.left(5);

        if(carc == "LINHA") return true;

        if(amountMatricula == 0 || depart == "" || titulacao == "" || typeContrato == ""){
            return true;
        }
        return false;
    }}
