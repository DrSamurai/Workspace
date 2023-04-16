#include <math.h>
#include <iostream>
#include <chrono>

using namespace std::chrono;
using namespace std;

int *generateRandomArray(int size);
void printArray(int *arr, int elementNum);
void linearSearch(int *arr, int size, int target);

int main()
{
    int *arr = generateRandomArray(1000);
    linearSearch(arr, 10000, 87);
    return 0;
}

void linearSearch(int *arr, int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "Index of target is: " << i<<endl;
        }
        
    } 
}

int *generateRandomArray(int size) // https://cplusplus.com/reference/random/mt19937/
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