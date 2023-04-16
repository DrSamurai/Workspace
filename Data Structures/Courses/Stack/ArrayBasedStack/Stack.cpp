#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack(int size)
{
    this->top = -1;
    this->arr = new int[size]; // allocating memory -> new...
    this->size = size;
}

/*

A pointer called TOP is used to keep track of the top element in the stack.
When initializing the stack, we set its value to -1 so that we can check if the stack is empty by comparing TOP == -1.
On pushing an element, we increase the value of TOP and place the new element in the position pointed to by TOP.
On popping an element, we return the element pointed to by TOP and reduce its value.
Before pushing, we check if the stack is already full
Before popping, we check if the stack is already empty

*/

void Stack::push(int num)
{ // to handle exception
    if (isFull())
    {
        std::cout << "Stack is full!" << endl;
        return;
    }
    top++;
    arr[top] = num;
}

int Stack::pop()
{
    if (isEmpty())
    {
        std::cout << "Stack is empty!" << endl;
        return INT_MIN;
    }
    return arr[top--];
}

int Stack::peek()
{
    if (isEmpty())
    {
        std::cout << "Stack is empty!" << endl;
        return INT_MIN;
    }
    return arr[top];
}

bool Stack::isFull()
{
    return top == size - 1;
}

bool Stack::isEmpty()
{
    return top == -1;
}

int Stack::currentSize()
{
    return top + 1;
}