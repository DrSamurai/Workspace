#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include "Node.h"

class BinarySearchTree
{

public:
    BinarySearchTree();
    void insertNode(int data);
    void deleteNode(int data);
    void inOrder();

private:
    Node *root;
    Node* insertNode(Node *node, int data);
    Node* deleteNode(Node *node, int data);
    int getInorderSuccessor(Node* node);
    void inOrder(Node *node);
};

#endif
