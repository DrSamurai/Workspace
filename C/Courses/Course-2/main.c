#include <stdio.h>

//void printHello(){
//    printf("Hello");
//}
//
//double getPi(){
//    return 3.14;
//}
//
//void printAge(int age){
//    printf("My age is %d\n",age);
//}
//
//float divide(int num1, int num2){
//    float ans = (float)num1/num2;
//    return ans;
//}

//int factorial(int num){
//    int ans = 1;
//    for(int i = 1; i<=num; i++){
//        ans = ans*i;
//    }
//    return ans;
//}

//int power(int base, int exponent){
//    // 3 ^ 4 => 81
//    // 3x3x3x3
//
//    int ans = 1;
//    for(int i = 1; i <= exponent; i++){
//        ans = base * ans;
//    }
//    return ans;
//}

int getMin(int num1, int num2){
//    if(num1<num2){
//        return num1;
//    }
//    else{
//        return num2;
//    }

    return num1<num2 ? num1:num2;
}

int getMax(int num1, int num2){
    return num1>num2 ? num1:num2;
}

//int greatestCD(int num1, int num2){
//    int ans = 1;
//    int counter = 0;
//
//
//    for (int i = 1; i <= getMin(num1,num2); ++i) {
//        counter ++;
//        if((num1%i == 0) && (num2%i == 0)){
//            ans = i;
//        }
//    }
//    printf("\nCounter: %d\n",counter);
//
//    return ans;
//}


// Failed Optimisation..."

//int greatestCD(int num1, int num2){
//    int counter = 0;
//
//    for (int i = getMin(num1,num2) ; i >= 1; --i) {
//        counter ++;
//        if((num1%i == 0) && (num2%i == 0)){
//            printf("\nCounter: %d\n",counter);
//            return i;
//        }
//    }
//
//    return 0;
//}
//
//// LCM
//
//int leastCM(int num1, int num2){
//    int counter = 0;
//    for(int i = getMax(num1,num2); ; i += getMax(num1,num2), counter++){
//        if(i % num1 == 0 && i % num2 == 0)
//        {
//            printf("Counter = %d\n",counter);
//            return i;
//        }
//    }
////}


int main(){



//int n1, n2, result;
//
//        printf("Enter two positive integers: ");
//        scanf("%d %d",&n1,&n2);
//
//        while(n1!=n2)
//        {
//            if(n1 > n2)
//                n1 -= n2;
//            else
//                n2 -= n1;
//        }
//        printf("GCD = %d",n1);



//    int answer = greatestCD(45,81);
//    printf("GCD is %d", answer);

int result = leastCM(134,32);
    printf("LCM is %d", result);


//    int answer = power(3,5);
//    printf("Ans = %d", answer);

//    int answer = factorial(7);
//    printf("Ans = %d",answer);

    /*              DEFINITION
     *
     *      returnType functionName(params...){
     *          // code
     *      }
     *
     *              CALL
     *
     *      functionName()...;
     */

    /*
     *      1. Non-Return with No-Params
     */

//    printHello();

    /*
     *      2. Return with No-Params
     */

//    double ans = getPi();
//    printf("Pi is %lf",ans);

    /*
     *      3. Non-Return with Params
     */

//    printAge(25);
//    printAge(22);
//    printAge(21);

    /*
     *      4. Return with Params
     */

//    float ans = divide(10,3);
//    printf("Ans = %f",ans);

    /*
     *  5! = 1x2x3x4x5 => 120
     *  4! = 1x2x3x4 => 24
     */


    return 0;
}
