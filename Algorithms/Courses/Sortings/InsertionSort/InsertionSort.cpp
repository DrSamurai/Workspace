#include "InsertionSort.h"

void InsertionSort::sort(int* arr, int length){
    for (int step = 1; step < length; step++)
    {
        int i = step-1;
        int key = arr[step];
        
        while (i >= 0 && arr[i] > key)
        {
            arr[i+1] = arr[i];  
            --i;              
        }

        arr[i+1] = key;   
    }
}