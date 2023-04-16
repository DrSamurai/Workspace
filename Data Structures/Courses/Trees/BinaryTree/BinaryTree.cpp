#include "BinaryTree.h"
#include <iostream>
using namespace std;

BinaryTree::BinaryTree()
{
    this->root = nullptr;
}

void BinaryTree::inOrder(Node *node)
{
    if (node)
    {
        inOrder(node->left);
        cout << node->value << " ";
        inOrder(node->right);
    }
}

void BinaryTree::preOrder(Node *node)
{
    if (node)
    {
        cout << node->value << " ";
        preOrder(node->left);
        preOrder(node->right);
    }
}

void BinaryTree::postOrder(Node *node)
{
    if (node)
    {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->value << " ";
    }
}