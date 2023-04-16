#include <cassert>
#include "Stack.h"
#include <iostream>

int main()
{
    Stack *stack = new Stack(5);
    assert(stack->currentSize() == 0);
    assert(stack->isEmpty() == 1);
    stack->push(10);
    assert(stack->isEmpty() == 0);
    stack->push(20);
    stack->push(30);
    assert(stack->currentSize() == 3);
    assert(stack->peek() == 30);

    assert(stack->pop() == 30);
    assert(stack->peek() == 20);
    assert(stack->pop() == 20);
    assert(stack->currentSize() == 1);

    assert(stack->peek() == 10);
    assert(stack->pop() == 10);
    assert(stack->isEmpty() == 1);

    return 0;
}