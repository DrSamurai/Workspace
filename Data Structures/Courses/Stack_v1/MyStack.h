//
// Created by Melih Yaz on 09.02.23.
//

#ifndef STACK_V1_MYSTACK_H
#define STACK_V1_MYSTACK_H
#include "MyNode.h"

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


#endif //STACK_V1_MYSTACK_H
