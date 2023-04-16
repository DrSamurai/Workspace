#include "Stack.h"
using namespace std;
#include "limits.h"

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
    // 1->2->3->4

    while (top->next)  // = top->next != nullptr
    {
        Node *temp = top->next;
        delete top;
        top = temp;
    }
}

void Stack::printStack(){

    while(top->next){
        
        cout<<top->value<<"->";
        top = top->next;
    } 

}

int Stack::size(){
    int size = 0;
    while (top->next)
    {
        top = top->next;
        size+=1;
    }
    return size;
}
