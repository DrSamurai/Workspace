#include "InsertionSort.h"
#include <math.h>
#include <iostream>
#include <chrono>

using namespace std::chrono;
using namespace std;

int *generateRandomArray(int size);
void printArray(int *arr, int elementNum);

int main()
{
    InsertionSort *sorter = new InsertionSort();

    for (int i = 1; i < 8; i++)
    {
        int size = pow(10, i);
        int *arr = generateRandomArray(size);

        auto start = high_resolution_clock::now();
        sorter->sort(arr, size);
        auto stop = high_resolution_clock::now();
        
        auto duration = duration_cast<milliseconds>(stop - start);
        cout << "Sorting " << size << " elements took " << duration.count() << "ms." << endl;
        free(arr);
    }
    return 0;
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
