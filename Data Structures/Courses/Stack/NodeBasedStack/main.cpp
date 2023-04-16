#include <iostream>
#include "Stack.h"

int main()
{
    // Create a stack object
    Stack s;

    // Check if the stack is empty
    std::cout << "Stack is empty: ";
    if (s.isEmpty())
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }

    // Push some values into the stack
    std::cout << "Pushing 10 onto the stack" << std::endl;
    s.push(10);
    std::cout << "Pushing 20 onto the stack" << std::endl;
    s.push(20);
    std::cout << "Pushing 30 onto the stack" << std::endl;
    s.push(30);

    // Check if the stack is empty
    std::cout << "Stack is empty: ";
    if (s.isEmpty())
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }

    // Get the size of the stack
    std::cout << "Stack size: " << s.size() << std::endl;

    // Print the values in the stack
    std::cout << "Printing stack values:" << std::endl;
    s.printStack();

    // Pop a value from the stack
    std::cout << "Popping value from the stack" << std::endl;
    int popped = s.pop();
    std::cout << "Popped value: " << popped << std::endl;
    std::cout << "Stack size: " << s.size() << std::endl;

    // Peek at the top value in the stack
    std::cout << "Peeking at the top value in the stack" << std::endl;
    int peeked = s.peek();
    std::cout << "Top value: " << peeked << std::endl;
    std::cout << "Stack size: " << s.size() << std::endl;

    // Clear the stack
    std::cout << "Clearing the stack" << std::endl;
    s.clear();

    // Check if the stack is empty
    std::cout << "Stack is empty: ";
    if (s.isEmpty())
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }

    // Get the size of the stack
    std::cout << "Stack size: " << s.size() << std::endl;

    return 0;
}
