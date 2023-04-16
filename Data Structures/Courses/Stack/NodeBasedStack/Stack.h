#ifndef STACK_H
#define STACK_H
#include "Node.h"
#include "iostream"

class Stack{
private:
    Node* top;

public:
    Stack();
    void push(int data);
    int pop();
    int peek();
    void clear();
    bool isEmpty();
    void printStack();
    int size();
};




#endif