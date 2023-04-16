#include <iostream>
#include "BalancedTree.h"
#include "Height.h"

int main()
{
    Height *height = new Height();
    BalancedTree *tree = new BalancedTree();

    tree->root = new Node(1);
    tree->root->left = new Node(2);
    tree->root->right = new Node(3);
    tree->root->left->left = new Node(4);
    tree->root->left->right = new Node(5);

    if (tree->checkBalance(tree->root, height))
        std::cout << "Tree is balanced!";
    else
        std::cout << "Tree is not balanced!";
}