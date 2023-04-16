#include <stdio.h>

int main(){
//    int mat[3][3];
//
//    for (int i = 0; i < 3 ; ++i) {
//        for (int j = 0; j < 3 ; ++j) {
//            // arr[0][1]:
//            printf("mat[%d][%d]: ", i, j);
//            scanf("%d", &mat[i][j]);
//
//        }
//    }
//
//    for (int i = 0; i < 3 ; ++i) {
//        for (int j = 0; j < 3 ; ++j) {
//            printf("%d  ",mat[i][j]);
//        }
//        printf("\n");
//    }


    /*
     *      1   2   3
     *      4   5   6
     *      7   8   9
     */

    //                                                      POINTERS

//    int var = 5;
//    printf("var: %d\n", var); // 5
//
//    // Notice the use of & before var
//    printf("address of var: %p", &var); //  x

//    int *pc, c;
//    // int* pc;
//    // int c;
//    c = 5;
//    pc = &c;
//    printf("%d", *pc); // 5

//    int* pc, c;
//    c = 5;
//    pc = &c;
//    c = 1;
//    printf("%d", c); // 1
//    printf("%d", *pc); // 1

//    int* pc, c;
//    c = 5;
//    pc = &c;
//    *pc = 1;
//    printf("%d", *pc); // 1
//    printf("%d", c); // 1

//    int* pc, c, d;
//    c = 5;
//    d = -15;
//
//    pc = &c;
//    printf("%d", *pc); // 5
//
//    pc = &d;
//    printf("%d", *pc); // -15

//    int* pc, c;
//
//    c = 22;
//    printf("%p\n", &c); // X
//    printf("%d\n\n", c); // 22
//
//    pc = &c;
//    printf("%p\n", pc); // X
//    printf("%d\n\n", *pc); // 22
//
//    c = 11;
//    printf("%p\n", pc); // X
//    printf("%d\n\n", *pc); // 11
//
//    *pc = 2;
//    printf("%p\n", &c); // X
//    printf("%d\n\n", c); // 2

//    int c, *pc;
//    pc = c; ERROR!
//    *pc = &c; // ERROR!
    // pc = &c; // OK
    // *pc = c; // OK

//    int array[5];
//
//    for (int i = 0; i < 5 ; ++i) {
//        printf("Enter number-%d: ", i);
////        scanf("%d", &array[i]);
//        scanf("%d", array+i);     //Array is already an address -> array + i -> new address for the given number...
//    }
//
//    for (int i = 0; i < 5; ++i) {
////        printf("%d ", array[i]);
//        printf("%d ",*(array+i)); // Star points towards the content of the address...
//    }

//    int array[5];
//
//    for (int i = 0; i < 5 ; ++i) {
//        printf("Enter number %d: ", i);
//        scanf("%d", array+i);
//    }
//
//    float average;
//    int sum = 0;
//
//    for (int i = 0; i < 5 ; ++i) {
//        sum += *(array + i);
//        // sum = sum + *(arr+i);
//    }
//    average = (float)sum / 5;
//
//    printf("Average is %f", average);





















}
