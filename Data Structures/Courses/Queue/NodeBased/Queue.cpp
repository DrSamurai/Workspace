//
// Created by Melih Yaz on 10.02.23.
//

#include "Queue.h"
#include "limits.h"

Queue::Queue() {
//    this->front= nullptr;
//    this->rear = nullptr;
    this->size=0;

}

bool Queue::isEmpty() {
    return (front == nullptr && rear == nullptr);
}

int Queue::getSize(){
    return size;
}

void Queue::clear(){
    while(!isEmpty()){
        dequeue();
    }
}

int Queue::peek() {
    if (isEmpty())
        return INT_MIN;
    return front->value;
}

void Queue::enqueue(int x) {
    Node* temp = new Node(x);
    size++;
    if (isEmpty()){
        front = temp;
        rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

int Queue::dequeue() {
    if (isEmpty()) {
        return INT_MIN;
    }

    Node* temp = front;
    int num = temp->value;

    if (front == rear) {
        front = nullptr;
        rear = nullptr;
    } else {
        front = front->next;
    }
    size--;
    delete temp;
    return num;
}

int Queue::getFront() {
    return front->value;
}

int Queue::getRear() {
    return rear->value;
}

