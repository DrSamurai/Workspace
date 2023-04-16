#pragma once

class QuickSort
{
public:
    void swap(int *a, int *b);
    void quickSort(int *arr, int l, int r);
    int partition(int *arr, int l, int r);
};
