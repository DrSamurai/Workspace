#include <stdio.h>
#include <math.h>

int main() {
//    int num1, num2, num3, maxInt1, maxInt2, maxInt3;

//    printf("Please enter three numbers: ");
//    scanf("%d %d %d", &num1, &num2, &num3);

//    maxInt1 = (num1>=num2) && (num1>=num3);
//    maxInt2 = (num2>=num1) && (num2>=num3);
//    maxInt3 = (num3>=num1) && (num3>=num2);
//
//    if(maxInt1 == 1){
//        printf("%d ist the maximum integer!", num1);
//    }
//    else if(maxInt2 == 1){
//        printf("%d is the maximum integer!", num2);
//    }
//    else if(maxInt3 == 1){
//        printf("%d is the maximum integer!", num3);
//    }
//    else{
//        printf("ERROR");
//    }

//    if((num1>=num2) && (num1>=num3))
//        printf("Max: %d",num1);
//
//    if((num2>=num1) && (num2>=num3))
//        printf("Max: %d",num2);
//
//    if((num3>=num1) && (num3>=num2))
//        printf("Max: %d",num3);

//    int num1, num2, num3, sit1, sit2 , sit3, sit4, sit5, sit6;
//
//    printf("Please enter 3 numbers...\n");
//
//    printf("Enter number 1: ");
//    scanf("%d", &num1);
//
//    printf("Enter number 2: ");
//    scanf("%d", &num2);
//
//    printf("Enter number 3: ");
//    scanf("%d", &num3);

    // 6 8 2

//    if((num1 <= num2) && (num2 <= num3)){
//        if(num2 < num3)
//            printf("%d < %d < %d",num1,num2,num3);
//        else
//            printf("%d < %d < %d",num1,num3,num2);
//    }
//    else if((num2 <= num1) && (num2 <= num3)){
//        if(num1 < num3)
//            printf("%d < %d < %d",num2,num1,num3);
//        else
//            printf("%d < %d < %d",num2,num3,num1);
//    }
//    else{
//        if(num2 < num1)
//            printf("%d < %d < %d",num3,num2,num1);
//        else
//            printf("%d < %d < %d",num3,num1,num2);
//    }




//    sit1 = (num1 <= num2) && (num2 <= num3);
//    sit2 = (num1 <= num3) && (num3 <= num2);
//
//    sit3 = (num2 <= num1) && (num1 <= num3);
//    sit4 = (num2 <= num3) && (num3 <= num1);
//
//    sit5 = (num3 <= num1) && (num1 <= num2);
//    sit6 = (num3 <= num2) && (num2 <= num1); why is this line not working?
//
//    if(sit1==1){
//        printf("%d <= %d <= %d\n", num1, num2, num3);
//    }
//    else if(sit2==1){
//        printf("%d <= %d <= %d\n", num1, num3, num2);
//    }
//    else if(sit3==1){
//        printf("%d <= %d <= %d\n", num2, num1, num3);
//    }
//    else if(sit4==1){
//        printf("%d <= %d <= %d\n", num2, num3, num1);
//    }
//    else if(sit5==1){
//        printf("%d <= %d <= %d\n", num3, num1, num2);
//    }
//    else{
//        printf("%d <= %d <= %d", num3, num2, num1);
//    }

//    int num, i, prime, optimusprime, notprime;
//    printf("Please enter a positive number: ");
//    scanf("%d", &num);
//    int counter = 0;
//
//    optimusprime = (num == 1) || (num == 2);
//    notprime = (num == 0) || (num * (-1) == num); //2nd half not working -> why?
//
//    if(optimusprime == 1){
//        printf("Number is prime!");
//    }
//    else if(notprime == 1){
//        printf("ERROR...");
//    }
//    else{
//        for(i=2; i<num; i++){
//            counter++;
//            prime = (num%i != 0);
//
//            if(prime != 0){
//                printf("Number is prime!");
//                break;
//            }
//            else{
//                printf("Number isn't prime...");
//                break;
//            }
//        }
//    }
//
//    printf("Counter: %d",counter);


    int num, isPrime = 1; // flag

    printf("Please enter a number: ");
    scanf("%d", &num);

    if(num < 2)
        isPrime = 0;

    int counter =0;

    for(int i = 2; i<=(int)sqrt(num); i++){
        counter++;
        if(num % i == 0){
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 1){
        printf("Number %d is prime!",num);
    }
    else{
        printf("Number %d is not prime!",num);
    }

    printf("\nCounter: %d",counter);



    return 0;
}
