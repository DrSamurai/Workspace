#include <iostream>
#include "BinarySearchTree.h"
#include "Node.h"
using namespace std;

int main()
{
    BinarySearchTree *tree = new BinarySearchTree();
    tree->insertNode(20);
    tree->insertNode(10);
    tree->insertNode(30);
    tree->insertNode(5);
    tree->insertNode(15);
    tree->insertNode(25);
    tree->insertNode(35);

    tree->inOrder();
    tree->deleteNode(15);
    cout << endl;
    tree->inOrder();
}