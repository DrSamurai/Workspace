#include "BubbleSort.h"
#include <iostream>
#include <math.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

int *generateRandomArray(int size);
void printArray(int *arr, int elementNum);

int main()
{
    BubbleSort *sorter = new BubbleSort();

    for (int i = 1; i <= 7; i++)
    {
        int elementNum = pow(10, i);
        int *arr = generateRandomArray(elementNum);
        auto start = high_resolution_clock::now();
        sorter->sort(arr, elementNum);
        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<milliseconds>(stop - start);
        cout << "Sorting " << elementNum << " elements took " << duration.count() << "ms." << endl;
        free(arr);
    }
}

int *generateRandomArray(int size)
{
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % size;
    }
    return arr;
}

void printArray(int *arr, int elementNum)
{
    for (int i = 0; i < elementNum; i++)
    {
        cout << arr[i] << "  ";
    }
}
