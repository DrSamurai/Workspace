//
// Created by Melih Yaz on 10.02.23.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H
#include "Node.h"


class Queue {

private:
    Node* front;
    Node* rear;
    int size;

public:
    Queue();
    void enqueue(int x);
    int dequeue();
    bool isEmpty();
    void clear();
    int getSize();
    int peek();
    int getFront();
    int getRear();
};


#endif //QUEUE_QUEUE_H
