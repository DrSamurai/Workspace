#include <iostream>
#include "AVLTree.h"
// #define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
// #include <crtdbg.h>

using namespace std;

int main()
{
    AVLTree *tree = new AVLTree();

    // Inserting nodes into the AVL tree
    tree->insertNode(10);
    tree->insertNode(20);
    tree->insertNode(30);
    tree->insertNode(40);
    tree->insertNode(50);
    tree->insertNode(25);

    cout << "Test" << endl;

    tree->deleteNode(30);
    delete tree;
    // _CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_DEBUG);
    // _CrtDumpMemoryLeaks();

    return 0;
}
