#ifndef LIST_H
#define LIST_H


#include "node.h"
class list
{
public:
    Node* head;
    Node* it;
    int tam;

    list(): head(nullptr), it(nullptr), tam(0){}

    bool InsertNext(int dado);
    bool Erase();
    void itHead();
    bool itPP();

};

#endif // LIST_H
