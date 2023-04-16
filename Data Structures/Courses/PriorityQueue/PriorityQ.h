//
// Created by Melih Yaz on 24.02.23.
//

#ifndef PRIORITYQUEUE_PRIORITYQ_H
#define PRIORITYQUEUE_PRIORITYQ_H
#include <queue>
#include "Node.h"


class PriorityQ {

private:
    Node* front;
    Node* rear;
    int size;

public:
    PriorityQ();
    void enqueue(int x);
    int dequeue();
    bool isEmpty();
    void clear();
    int getSize();
    int peek();
    int getFront();
    int getRear();
};


#endif //PRIORITYQUEUE_PRIORITYQ_H
