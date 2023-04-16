#include "MergeSort.h"

void MergeSort::merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int leftArray[n1];
    int rightArray[n2];

    for (int i = 0; i < n1; i++)
    {
        leftArray[i] = arr[i+l];
    }
    

    for (int i = 0; i < n2; i++)
    {
        rightArray[i] = arr[i+m+1];
    }

    int i = 0, j = 0, k = l;

    while (i<n1 && j<n2)
    {
        if (leftArray[i]<rightArray[j])
        {
            arr[k] = leftArray[i];
            i++;
        }
        else{
            arr[k] = rightArray[j];
            j++;        
        }
        ++k;
    }

    while (i<n1)
    {
        arr[k] = leftArray[i];
        i++;
        ++k;
    }

    while (j<n2)
    {
        arr[k] = rightArray[j];
        j++;
        ++k;  
    }
}

void MergeSort::mergeSort(int arr[], int l, int r)
{

    if (l < r)
    {
        int m = (l + r) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}