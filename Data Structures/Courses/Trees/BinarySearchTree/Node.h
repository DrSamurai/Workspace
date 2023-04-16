#ifndef NODE_H
#define NODE_H
#include <iostream>

class Node{
public:
    int value;
    Node* left;
    Node* right;

    Node(int value);
};

#endif