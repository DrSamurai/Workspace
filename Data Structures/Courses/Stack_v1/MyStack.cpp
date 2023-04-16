#include "MyStack.h"
using namespace std;
#include "limits.h"
#include <iostream>

Stack::Stack()
{
    this->top = nullptr;
}

void Stack::push(int data)
{
    if (isEmpty())
    {
        top = new Node(data);
        return;
    }

    Node *temp = top;
    top = new Node(data);
    top->next = temp;
}

int Stack::pop()
{
    if (isEmpty())
    {
        return INT_MIN;
    }

    Node *temp = top;
    top = top->next;

    int data = temp->value;
    delete temp;

    return data; // int data local variable -> primitive storage
}

int Stack::peek()
{
    if (!isEmpty())
    {
        return top->value;
    }
    return INT_MIN;
}

bool Stack::isEmpty()
{
    return top == nullptr;
}

void Stack::clear()
{
    while (!isEmpty())
        pop();
}

void Stack::printStack(){
    Node* curr = top;
    cout << "top";
    while(curr){
        cout<< " -> " << curr->value;
        curr = curr->next;
    }
    cout << " -> null" << endl;

}

int Stack::size(){
    int size = 0;
    Node* curr = top;
    while (curr)
    {
        curr = curr->next;
        size++;
    }
    return size;
}
