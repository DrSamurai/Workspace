#ifndef AVLTREE_H
#define AVLTREE_H
#include "Node.h"

class AVLTree
{
private:
    Node *root;
    int getHeight(Node *node);
    int getMax(int left, int right);
    Node *leftRotate(Node *x);
    Node *rightRotate(Node *y);
    int getBalanceFactor(Node *node);
    Node *insertNode(Node *node, int item);
    Node *deleteNode(Node *node, int item);
    int minValue(Node *node);

public:
    ~AVLTree();
    void deleteAllNodes(Node *node);
    void insertNode(int data);
    void deleteNode(int data);
};

#endif