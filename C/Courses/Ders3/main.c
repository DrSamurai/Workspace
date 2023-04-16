#include <stdio.h>
#include <stdbool.h>



// Write a function reverse_array that takes in an array of integers and its size, and returns a new array with the elements in reverse order.
// For example, if the input array is [1, 2, 3, 4] and its size is 4, the function should return a new array [4, 3, 2, 1].

//First try...
//void reverseArray(int size){
//    int new_array[size];
//    int array[size];
//
//    for (int i = 0; i < size ; ++i) {
//        printf("Enter number %d: ", i);
//        scanf("%d", &array[i]);  // this line inside second for loop -> meh...
//    }
//
//    for (int j = size-1, i = 0; j >= 0 ; --j, i++) {
//        new_array[j] = array[i];
//    }
//
//    printf("\nReverse order of the array is: \n");
//
//    for (int i = 0; i < size ; ++i) {  // reverse here?
//        printf("Number %d is: %d \n", i, new_array[i]);
//    }
//}

int* reverseArray(int *arr, int size){
    // 1 2 3 4 5
    for(int i = 0; i <= size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }

    return arr;
}


//Second try...

//void reverseArray(int size){
//    int array[size];
//    int temp;
//    printf("Please enter the size of the array... ");
//    scanf("%d", &size);
//
//    for (int i = 1; i <= size ; ++i) {
//        printf("Enter number %d: ", i);
//        scanf("%d", &array[i]);
//    }
//    for (int i = 1; i <= size/2 ; ++i) {
//        temp = array[i];
//        array[i] = array[size-i-1];
//        array[size-1-i] = temp;
//    }
//
//    printf("\nReverse order of the array is: \n");
//
//    for (int i = 1; i <= size ; ++i) {
//        printf("Number %d is: %d \n", i, array[i]);
//
//    }
//}


// Write a function find_max that takes in an array of integers and its size, and returns the maximum value in the array.
// For example, if the input array is [1, 4, 2, 3] and its size is 4, the function should return 4.


//int find_max(int size){
//    int array[size];
//    int maxValue;

//
//    for (int i = 0; i < size ; ++i) {
//        printf("Enter number %d: ", i);
//        scanf("%d", &array[i]);
//        if(array[i+1] >= array[i]){
//            maxValue = array[i+1];
//        }
//        else{
//            maxValue = array[i];
//        }
//
//    }
//    printf("Max value is ...%d", maxValue);
//    return maxValue;
//
//    }

//int findMax(int arr[], int size){
//    int max = arr[0];
//    for(int i = 1; i<size; i++){
//        if(arr[i] > max)
//            max = arr[i];
//    }
//    return max;
//}


// Write a function "contains" that takes in an array of integers, and an integer. This function suppose to find if array contains given element.
// [1, 4, 2, 3] , 3 => True
// [1, 4, 2, 3] , 5 => False

//int contains(int arr[], int size, int target){
//    for(int i = 0; i<size; i++){
//        if(arr[i] == target)
//            return true;
//    }
//    return false;
//}

//int factorial(int num){
//    // 5! = 5x4x3x2x1 => 1x2x3x4x5 => 120
//    // 5! = 5 x 4!
//    // 4! = 4 x 3!
//    // 3! = 3 x 2
//    // 2! = 2 x 1
//    // 1! = 1
//
//    if(num == 1)
//        return 1;
//    return num * factorial(num-1);
//}
//
//int power(int base, int exponent){
//    // 3^4 = 3x3x3x3
//    // 3^4 = 3 * 3^3
//    if(exponent == 1)
//        return base;
//    return base * power(base,exponent-1);
//}

// 0 1 1 2 3 5 8 13 21 34 55

//double fibo1(int term){
//
//    if(term == 0 || term == 1)
//        return term;
//    double firstTerm = 0;
//    double secTerm = 1;
//    double lastTerm = firstTerm + secTerm;
//
//    for(int i = 0; i<=term-2; i++){
//        lastTerm = firstTerm + secTerm;
//        firstTerm = secTerm;
//        secTerm = lastTerm;
//    }
//    return lastTerm;
//}
//
//int fibo2(int term){
//    if(term == 0 || term == 1)
//        return term;
//    return fibo2(term-1) + fibo2(term-2);
//}

//int summation(int num){
//    // 1 + 2 + 3 + 4 + 5
//
//    int result = 0;
//    for (int i = 0; i <= num ; ++i) {
//        result = i + result; // result += i
//    }
//    return result;
//}

//int summation(int num){
//    // s(5) = 1 + 2 + 3 + 4 + 5
//    // s(5) = 5 + s(4)
//    if (num == 0){
//        return 0;
//    }
//    return num + summation(num-1);
//}



int main() {
//    int arr[5] = {1,2,3,55,4};
//    printf("%d\n",contains(arr,5,55));
//    printf("%d",contains(arr,5,75));

    //              RECURSION

//    printf("%d", factorial(5));
//    printf("%d", power(3,4));
//    printf("%d",fibo(10));

//    for(int i = 0; i<100; i++){
//        printf("%d. term of fibo is %d\n",i,fibo2(i));
//    }

//    printf("%d", summation(10));

    //                      ARRAY

    // array => int[]
    // array[3] => int
//    int array[6];
//
//    for (int i = 1; i <= 6; ++i) {
//        printf("Enter number %d: ", i);
//        scanf("%d", &array[i]);
//    }
//
//    printf("\nArray is: \n");
//
//    for (int i = 1; i <= 6; ++i) {
//        printf("array[%d] => %d\n",i,array[i]);
//    }
//

//    int arr[] = {1,2,3,4,5};
//    int* pc = reverseArray(arr, 5);
//
//    for(int i = 0; i<5; i++){
//        printf("%d\n",*(pc+i));
//    }

//    find_max(20);
//    contains(10);

    // Write a function reverse_array that takes in an array of integers and its size, and returns a new array with the elements in reverse order.
    // For example, if the input array is [1, 2, 3, 4] and its size is 4, the function should return a new array [4, 3, 2, 1].

    // Write a function find_max that takes in an array of integers and its size, and returns the maximum value in the array.
    // For example, if the input array is [1, 4, 2, 3] and its size is 4, the function should return 4.

    // Write a function "contains" that takes in an array of integers, and an integer. This function suppose to find if array contains given element.
    // [1, 4, 2, 3] , 3 => True
    // [1, 4, 2, 3] , 5 => False


    return 0;
}
