#include <stdio.h>

int *find_min(int arr[][4], int rows, int cols){  // 'ellipsis' = 4, Do I need to specify this?
    if (rows == 0 || cols == 0){
        return NULL;
    }

    int *min = &arr[0][0];

    for (int i = 0; i < rows ; ++i) {
        for (int j = 0; j < cols ; ++j) {
            if(arr[i][j] < *min)
                min = &arr[i][j];
        }
    }

    return min;
}




int main() {
    int arr[3][4] = {{77, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12}};
    int *min = find_min(arr, 3, 4);

    printf("Min: %d", *min);
    return 0;
}
