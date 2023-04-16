#include <iostream>
using namespace std;

void binarySearch(int *arr, int size, int target);
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    binarySearch(arr, 10, 7);
}

/*

                       R E N L C I _ S O
          2
    M(1)    P(1)       1 1 1 1 2 2 2 3 4




*/

void binarySearch(int *arr, int size, int target)
{

    int start = 0;
    int end = size - 1;

    while (true)
    {
        int m = start + (end - start) / 2;
        if (target < arr[m])
        {
            end = m;
        }
        else if (target > arr[m]) // else cuz if, if is false
        {
            start = m;
        }
        else
        {
            cout << "Found " << target << " at index " << m << endl;
            return;
        }
    }
}
