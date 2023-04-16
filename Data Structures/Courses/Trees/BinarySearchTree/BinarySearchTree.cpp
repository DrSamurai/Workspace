#include "BinarySearchTree.h"
#include <iostream>
using namespace std;

BinarySearchTree::BinarySearchTree()
{
    this->root = nullptr;
}

void BinarySearchTree::insertNode(int data)
{
    this->root = insertNode(this->root, data);  // this->root ??
}

void BinarySearchTree::deleteNode(int data)
{
    this->root = deleteNode(this->root, data);
}

void BinarySearchTree::inOrder()
{
    inOrder(root);
}

void BinarySearchTree::inOrder(Node* node)
{
    if(node){
        inOrder(node->left);
        cout << node->value << " ";
        inOrder(node->right);
    }
}

Node *BinarySearchTree::insertNode(Node *node, int data)
{
    if (node == nullptr)
    {
        return new Node(data);
    }
    else if (data < node->value)
    {
        node->left = insertNode(node->left, data);
    }
    else if (data > node->value)
    {
        node->right = insertNode(node->right, data);
    }
    return node;
}

Node *BinarySearchTree::deleteNode(Node *node, int data)
{
    if (node == nullptr)
    {
        return nullptr;
    }
    else if (data < node->value)
    {
        node->left = deleteNode(node->left, data);
    }
    else if (data > node->value)
    {
        node->right = deleteNode(node->right, data);
    }
    else
    {
        // case-1 => No Child!
        if (!node->left && !node->right)
        {
            return nullptr;
        }
        // case-2 => Left Child is present but there is no right child
        else if (node->left && !node->right)
        {
            return node->left;
        }
        // case-2 => Left Child is not present but there is a right child
        else if (!node->left && node->right)
        {
            return node->right;
        }
        else
        {
            node->value = getInorderSuccessor(node->right);
            node->right = deleteNode(node->right, node->value);
        }
    }
    return node;
}

int BinarySearchTree::getInorderSuccessor(Node *node)
{
    Node *current = node;
    while (current->left)
    {
        current = current->left;
    }
    return current->value;
}