#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList{
private:
    Node* head;
public:
    LinkedList();
    
    void append(int data);
    void prepend(int data);
    void deleteData(int data);
    bool contains(int data);
    bool isEmpty();
    int indexOf(int data);
    int get(int index);
    void clear();
    int getFirst();
    int getLast();
    int size();
    void printList();
};

#endif