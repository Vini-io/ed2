#ifndef NODE_H
#define NODE_H


class Node{
public:
    Node* next;
    Node* prev;
    int vertice;

    Node(const int dado): next(nullptr), prev(nullptr), vertice(dado){}

};



#endif // NODE_H
