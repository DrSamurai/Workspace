#include "../BinarySearchTree/BinarySearchTree.h"
#include "../../LinkedList/LinkedList.h"
#include <cstdlib>
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int *randomizedArray(int size)
{
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100000;
    }

    return arr;
}

int main()
{
    BinarySearchTree *bst = new BinarySearchTree();
    LinkedList *ll = new LinkedList();

    for (int i = 10; i < 1000000; i *= 10)
    {
        int *arr = randomizedArray(i);

        auto start = high_resolution_clock::now();
        for (int j = 0; j < i; j++)
        {
            ll->append(arr[j]);
        }
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(end - start);

        cout << "Time consumed while appending " << i << " elements to the linkedlist is: " << duration.count() << "ms." << endl;
    }

    return 0;
}