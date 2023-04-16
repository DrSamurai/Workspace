#include "SelectionSort.h"

void SelectionSort::sort(int *arr, int elementCount)
{
    // 2 -- 4 -- 1 -- 5

    for (int i = 0; i < elementCount - 2; i++)
    {
        int min = arr[i];
        int minIdx = i;
        int max = arr[i];
        int maxIdx = i;

        for (int j = i; j < elementCount; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minIdx = j;
            }

            if (arr[j] > max)
            {
                max = arr[j];
                maxIdx = j;
            }
        }
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;

        temp = arr[maxIdx];
        arr[maxIdx] = arr[elementCount - 1 - i];
        arr[elementCount - 1- i] = temp;
    }
}