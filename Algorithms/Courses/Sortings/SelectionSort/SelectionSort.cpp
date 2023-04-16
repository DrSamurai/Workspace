#include "SelectionSort.h"

void SelectionSort::sort(int *arr, int elementCount)
{
    // 2 -- 4 -- 1 -- 5

    for (int i = 0; i < elementCount-1; i++)
    {
        int min = arr[i];
        int minIdx = i;
        for (int j = i; j < elementCount; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minIdx = j;
            }
        }
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}