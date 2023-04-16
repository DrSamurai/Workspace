#include "LinkedList.h"
#include <limits.h>
#include <iostream>

using namespace std;

LinkedList::LinkedList()
{
    this->head = nullptr;
}

void LinkedList::append(int data)
{
    if (head == nullptr)
    {
        head = new Node(data);
    }
    else
    {
        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = new Node(data);
    }
}

void LinkedList::prepend(int data)
{
    // 1 -> 2 -> 3 -> 4 -> null
    Node *node = new Node(data);
    node->next = head;
    head = node;
}

void LinkedList::deleteData(int data)
{
    // 1st option
    if (head != nullptr && head->value == data)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        // X Y Z Q W
        Node *current = head;
        while (current != nullptr && current->next != nullptr)
        {
            if (current->next->value == data)
            {
                Node *temp = current->next;
                current->next = current->next->next;
                delete temp;
                break; // or return...
            }
            current = current->next;
        }
    }
}

bool LinkedList::contains(int data)
{
    Node *current = head;
    while (current != nullptr)
    {

        if (current->value == data)
        {
            return true;
        }
        current = current->next;
    }

    return false;
}

bool LinkedList::isEmpty()
{
    return this->head == nullptr;
    // return this->head == nullptr ? true : false;
}

int LinkedList::indexOf(int data)
{
    if (contains(data))
    {
        Node *current = head;
        int index = 0;

        while (current != nullptr)
        {

            if (current->value == data)
            {
                return index;
            }
            current = current->next;
            index++;
        }
    }
    return -1;
}

int LinkedList::get(int index)
{
    if (0 <= index && index <= size() - 1)
    {
        Node *current = head;

        for (int i = 0; i < index; i++)
        {
            current = current->next;
        }

        return current->value;
    }
    else
    {
        return INT_MIN;
    }
}

void LinkedList::clear()
{
    for (int i = 0; i < size(); i++)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

int LinkedList::getFirst()
{
    return head->value;
}

int LinkedList::getLast()
{

    Node *current = head;

    for (int i = 0; i < size() - 1; i++)
    {
        current = current->next;
    }
    return current->value;
}

int LinkedList::size()
{
    Node *current = head;
    int size = 0;

    while (current != nullptr)
    {
        size++;
        current = current->next;
    }

    return size;
}

void LinkedList::printList()
{

    Node *node = head;

    for (int i = 0; i < size(); i++)
    {
        cout << node << "-->";
        node = node->next;
    }
    cout << "NULL" << endl;
}