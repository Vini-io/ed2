#ifndef TABELA_HASH_H
#define TABELA_HASH_H


#include "lista.h"
#include <QString>
#include "vertice.h"

namespace VN {
template <class T>
class Tabela_hash{
public:
    VN::lista<T> *VetorTabela;
    int QAlunos, TAMVERTICE;

    Tabela_hash(): VetorTabela(nullptr), TAMVERTICE(-1){}
    ~Tabela_hash(){
        delete []VetorTabela;
    }
    bool CreateTabela(int TAM){
        try {
            TAMVERTICE = TAM;
            VetorTabela = new lista<T>[TAM];
        } catch (std::bad_alloc &err) {
            throw QString("Erro na alocação de memória");
        }
    }


    bool insertion(int vertice, int ligacao, int peso,int tam_tabela){
        if(VetorTabela[vertice].tam > 0 && VetorTabela[vertice].repeatAlun(ligacao)){
            QMessageBox messageBox;
            messageBox.setText("Já existe");
            messageBox.setIcon(QMessageBox::Critical);
            messageBox.exec();
            return false;
        }

        if(ligacao > -1 && ligacao < tam_tabela && vertice != ligacao){
            VN::Vertice *objVertice = new Vertice();
            objVertice->createObj(ligacao, peso);

            VetorTabela[vertice].InsertNext(*objVertice);
            objVertice->createObj(vertice, peso);
            VetorTabela[ligacao].InsertNext(*objVertice);
            return true;
        }
        return false;
    }



    bool alteracao(int vertice, int ligacao, int nova_ligacao,int  peso, int tam_tabela){
        if(VetorTabela[vertice].tam == 0 || nova_ligacao < 0 || nova_ligacao >= tam_tabela || vertice == nova_ligacao) return false;

        while(VetorTabela[vertice].it->dado.vertice != ligacao && VetorTabela[vertice].it->next != VetorTabela[vertice].head && VetorTabela[vertice].it->dado.vertice != nova_ligacao){
            VetorTabela[vertice].itPP();
        }

        if(VetorTabela[vertice].it->dado.vertice == ligacao){

            remover(VetorTabela[vertice]);
            VetorTabela[vertice].itHead();

            while(VetorTabela[ligacao].it->dado.vertice != vertice && VetorTabela[ligacao].it->next != VetorTabela[ligacao].head){
                VetorTabela[ligacao].itPP();
            }
            remover(VetorTabela[ligacao]);
            VetorTabela[ligacao].itHead();

            if(insertion(vertice, nova_ligacao, peso, tam_tabela)) return true;
        }


        return false;

    }

    bool remover(lista<T> & VetorTabelaP){
        if(VetorTabelaP.Erase()) return true;
        return false;
    }


};
}


#endif // TABELA_HASH_H

