#include "QuickSort.h"

void QuickSort::swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void QuickSort::quickSort(int *arr, int l, int r)
{
    if (l < r)
    {
        int pivot = partition(arr, l, r);
        quickSort(arr, l, pivot - 1);
        quickSort(arr, pivot + 1, r);
    }
}

int QuickSort::partition(int *arr, int l, int r)
{

    int pivot = arr[r];
    int i = l - 1;

    for (int j = l; j < r; ++j)
    {
        if (arr[j] < pivot)
        {
            ++i;
            swap(&arr[i], &arr[j]);
        }
    }

    ++i;
    swap(&arr[i], &arr[r]); // specific position of r in array will be swapped, pivot is not in the arr
    return i;
}
