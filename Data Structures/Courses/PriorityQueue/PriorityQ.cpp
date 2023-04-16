//
// Created by Melih Yaz on 24.02.23.
//

#include "PriorityQ.h"

#include "limits.h"

PriorityQ::PriorityQ() {
//    this->front= nullptr;
//    this->rear = nullptr;
    this->size=0;

}

bool PriorityQ::isEmpty() {
    return (front == nullptr && rear == nullptr);
}

int PriorityQ::getSize(){
    return size;
}

void PriorityQ::clear(){
    while(!isEmpty()){
        dequeue();
    }
}

int PriorityQ::peek() {
    if (isEmpty())
        return INT_MIN;
    return front->value;
}

void PriorityQ::enqueue(int x) {
    Node* temp = new Node(x);
    size++;
    if (isEmpty()){
        front = temp;
        rear = temp;
        return;
    }
    if (x > front->value) {
        temp->next = front;
        front = temp;
        return;
    }
    Node* curr = front;
    while (curr->next != nullptr && x <= curr->next->value) {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    if (temp->next == nullptr) {
        rear = temp;
    }
}

int PriorityQ::dequeue() {
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

int PriorityQ::getFront() {
    return front->value;
}

int PriorityQ::getRear() {
    return rear->value;
}


