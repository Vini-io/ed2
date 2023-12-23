#include "list.h"
#include "qmessagebox.h"



bool list::InsertNext(int dado)
{
    Node* newNode = new Node(dado);

    if(!head){
        head = newNode;
        tam++;
        it = newNode;
        return true;
    }else{
        newNode->prev = it;
        it->next = newNode;
        it = newNode;
        tam++;
        return true;
    }
    return false;
}

bool list::Erase()
{
    if(tam == 0) return false;
    if(head){
        Node* itAux = it;

        if(it == head){
            head = it->next;
        }else if(it->next == nullptr){
            (it->prev)->next = nullptr;
        }else{
            (it->next)->prev = it->prev;
            (it->prev)->next = it->next;
        }
        it = head;
        delete itAux;
        tam--;
        return true;
    }
    return false;
}

void list::itHead()
{
    it = head;
}

bool list::itPP()
{
    if(!it || !it->next) return false;

    it = it->next;
    return true;
}
