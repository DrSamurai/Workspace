#ifndef STACK_H
#define STACK_H

#include <iostream>

class Stack
{
private:
    int top;
    int *arr; // array size not known -> pointer -> dynamic mem allocation...
    int size;

public:
    Stack(int size);
    void push(int num);
    int pop();
    int peek();
    bool isFull();
    bool isEmpty();
    int currentSize();
};

#endif