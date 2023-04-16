#ifndef BINARYTREE_H
#define BINARYTREE_H
#include "Node.h"

class BinaryTree
{

public:
    Node *root;
    void inOrder(Node *node);
    void preOrder(Node *node);
    void postOrder(Node *node);

    BinaryTree();
};

#endif