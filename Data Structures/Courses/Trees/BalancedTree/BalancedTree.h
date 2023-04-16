#ifndef BALANCED_TREE_H
#define BALANCED_TREE_H
#include "Node.h"
#include "Height.h"

class BalancedTree
{
public:
    Node *root;
    bool checkBalance(Node *root, Height *height);
};

#endif