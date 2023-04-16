#include "BinaryTree.h"
#include "Node.h"
#include <iostream>
using namespace std;

int main()
{

    BinaryTree *treeExample = new BinaryTree();
    treeExample->root = new Node(1);
    treeExample->root->left = new Node(7);
    treeExample->root->right = new Node(9);
    treeExample->root->left->left = new Node(2);
    treeExample->root->left->right = new Node(6);
    treeExample->root->right->right = new Node(9);
    treeExample->root->left->right->left = new Node(5);
    treeExample->root->left->right->right = new Node(11);
    treeExample->root->right->right->left = new Node(5);

    treeExample->inOrder(treeExample->root);
    cout << endl;
    treeExample->preOrder(treeExample->root);
    cout << endl;
    treeExample->postOrder(treeExample->root);
    cout << endl;

    return 0;
}