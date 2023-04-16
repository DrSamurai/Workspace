//
// Created by Melih Yaz on 10.02.23.
//

#include "Queue.h"
#include "limits.h"
Queue::Queue(int size){
    this->front = -1;
    this->rear = -1;
    this->capacity=size;
    this->arr = new int[size];
}

bool Queue::isEmpty() {
    return front == -1 && rear == -1;
}

bool Queue::isFull() {
    return rear == capacity - 1 && front == 0;
}

void Queue::enqueue(int data) {

    if (isFull()){
        return;
    }
    if (isEmpty()) {
        front = 0;
    }
    rear++;
    arr[rear]=data;
}

int Queue::dequeue() {
    if (isEmpty()){
        return INT_MIN;
    }

    int value = arr[front];

    if (front==rear){
        front = -1;
        rear = -1;
    }
    else{
        front++;
    }
    return value;
}

int Queue::peek(){
    if(!isEmpty())
    return arr[front];
}

int Queue::getFront() {
    return front;
}

int Queue::getRear() {
    return rear;
}

int Queue::size() {
    if (isEmpty())
        return 0;
    return (rear-front)+1;
}
// X X 3 4 X X X

void Queue::deleteArray() {
    delete arr;
}
