//
// Created by Melih Yaz on 10.02.23.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H


class Queue {

private:
    int front, rear;
    int* arr;
    int capacity;

public:
    Queue(int size);
    int dequeue();
    void enqueue(int data);
    int peek();
    bool isEmpty();
    bool isFull();
    int getFront();
    int getRear();
    int size();
    void deleteArray();


};


#endif //QUEUE_QUEUE_H
