#include <stdio.h>

int main() {
    // printf("Hello, World!\n");
    // printf("Hello World!");

    /*
     *                              DATA TYPES
     *
     *       int                    4byte                   %d
     *       char                   1byte                   %c
     *       float                  4byte                   %f
     *       double                 8byte                   %lf
     *
     */

    // declaring variables
    // dataType varName = value;
    // dataType varName;

//    int age = 20;
//    char letter = 'A';
//    float pi = 3.14f;
//    double gpa = 3.88;
//
//    printf("Age = %d\n",age);
//    printf("Letter = %c\n",letter);
//    printf("PI = %.3f\n",pi);
//    printf("GPA = %.2lf\n",gpa);


//    int age = 20;
//    char letter = 'M';
//    float average = 3.90f;
//    double height = 1.78;
//
//    // myFirstAge Camelcase İsimlendirme!
//
//    printf("Age = %d\n", age);
//    printf("Letter = %c\n", letter);
//    printf("Average = %.1f\n", average);
//    printf("Height = %.2lf\n", height);

//    int age;
//    printf("Enter your age: ");
//    scanf("%d",&age);
//
//    printf("Your age is %d",age);



//    int num1;
//    int num2;
//
//    printf("Enter number 1: ");
//    scanf("%d", &num1);
//
//    printf("Enter number 2: ");
//    scanf("%d", &num2);
//
//    // 13 * 20 = 260
//
//    printf("%d * %d = %d",num1, num2, num1*num2);

//    int n1, n2;
//    printf("Enter 2 numbers: ");
//    scanf("%d %d",&n1,&n2);
//
//    printf("N1 = %d\nN2 = %d",n1,n2);

    /*
     *                              OPERATORS
     *    1. Arithmetic Operators
     *
     *          + - * / %
     *
     */

//    int a = 9,b = 4, c;
//
//    c = a+b;
//    printf("a+b = %d \n",c); // 13
//    c = a-b;
//    printf("a-b = %d \n",c); // 5
//    c = a*b;
//    printf("a*b = %d \n",c); // 36
//    c = a/b;
//    printf("a/b = %d \n",c); // 2
//    c = a%b;
//    printf("Remainder when a divided by b = %d \n",c); // 1

    /*
     *      2. Increment-Decrement Operators
     *          ++
     *          --
     */

//    int n1 = 10, n2 = 20, n3 = 30, n4 = 40;
//    printf("%d",n1++);
//    printf("%d",n1);
//    printf("%d", ++n2);
//
//    printf("%d",n3--);

    /*
     *      3. Assignment Operators
     *
     *          =
     *          +=
     *          -=
     *          *=
     *          /=
     *          %=
     *
     *
     */

//    int a = 5, c;
//
//    c = a;
//    printf("c = %d\n", c); // 5
//    c += a;
//    printf("c = %d\n", c); // 10
//    c -= a;
//    printf("c = %d\n", c); // 5
//    c *= a;
//    printf("c = %d\n", c); // 25
//    c /= a;
//    printf("c = %d\n", c); // 5
//    c %= a;
//    printf("c = %d\n", c); // 0

    /*
     *          4. Relational Operators
     *
     *              ==
     *              >
     *              <
     *              !=
     *              >=
     *              <=
     */

//    int a = 5, b = 5, c = 10;
//
//    printf("%d == %d is %d \n", a, b, a == b); // 1
//    printf("%d == %d is %d \n", a, c, a == c); // 0
//    printf("%d > %d is %d \n", a, b, a > b); // 0
//    printf("%d > %d is %d \n", a, c, a > c); // 0
//    printf("%d < %d is %d \n", a, b, a < b); // 0
//    printf("%d < %d is %d \n", a, c, a < c); // 1
//    printf("%d != %d is %d \n", a, b, a != b); // 0
//    printf("%d != %d is %d \n", a, c, a != c); // 1
//    printf("%d >= %d is %d \n", a, b, a >= b); // 1
//    printf("%d >= %d is %d \n", a, c, a >= c); // 0
//    printf("%d <= %d is %d \n", a, b, a <= b); // 1
//    printf("%d <= %d is %d \n", a, c, a <= c); // 1

    /*
     *          5. Logical Operators
     *
     *              &&
     *              ||
     *              !
     *
     *
     */

//    int a = 5, b = 5, c = 10, result;
//
//    result = (a == b) && (c > b);
//    printf("(a == b) && (c > b) is %d \n", result); // 1
//
//    result = (a == b) && (c < b);
//    printf("(a == b) && (c < b) is %d \n", result); // 0
//
//    result = (a == b) || (c < b);
//    printf("(a == b) || (c < b) is %d \n", result); // 1
//
//    result = (a != b) || (c < b);
//    printf("(a != b) || (c < b) is %d \n", result); // 0
//
//    result = !(a != b);
//    printf("!(a != b) is %d \n", result); // 1 Focus
//i
//    result = !(a == b);
//    printf("!(a == b) is %d \n", result); // 0

    //                  FLOW CONTROL

    /*
     *              1. IF-ELSE
     *              2. SWITCH-CASE
     *              3. FOR LOOPS
     *              4. WHILE LOOPS
     *
     */

    /*
     *                  if(condition1){
     *                      // runs if condition1 == true
     *                  }
     *                  else if(condition2){
     *                      // runs only if condition1 == false and condition2 == true
     *                  }
     *                  ...
     *                  else{
     *                      // runs
     *                  }
     */

//    int age;
//    printf("Please enter your age: ");
//    scanf("%d", &age);
//
//    if(age > 18){
//        printf("You can vote!");
//    }
//    else{
//        printf("Sorry, you cannot vote!");
//    }

//    int num;
//    printf("Enter a number: ");
//    scanf("%d", &num);
//
//    if(num>0){
//        printf("Number is positive.");
//    }
//    else if(num<0){
//        printf("Number is negative.");
//    }
//    else{
//        printf("Number is 0.");
//    }

//    int num = 3;
//
//    switch (num) {
//        case 1:
//            printf("1");
//            break;
//        case 2:
//            printf("2");
//            break;
//        case 3:
//            printf("3");
//            break;
//        default:
//            printf("Error!");
//    }

//    int num;
//    printf("Enter a number: ");
//    scanf("%d", &num);
//
//    switch (num) {
//        case 1:
//            printf("Winter");
//            break;
//        case 2:
//            printf("Spring");
//            break;
//        case 3:
//            printf("Summer");
//            break;
//        case 4:
//            printf("Autumn");
//            break;
//        default:
//            printf("Enter a number between 1-4.");
//    }

    /*
     *              FOR LOOPS
     *
     *     for(initialization; condition; update){
     *          //code
     *      }
     *
     *
     */

//    for(int i = 0; i<10; i++){
//        printf("%d\n",i);
//    }



//    for(int i = 0; i < 20; i++){
//        if(i%2 == 0){
//            printf("%d\n", i);
//        }
//    }

//    int num;
//    printf("Enter a number: ");
//    scanf("%d", &num);
//
//    int sum = 0;
//    for(int i = 1; i<=num; i++){
//        sum += i;       // sum = sum + i;
//    }
//
//    printf("Ans = %d",sum);




//----------------------ASSIGNMENT 1--------------------------

//----------------------EXERCISE 1----------------------------


    int num1, num2, num3, maxInt1, maxInt2, maxInt3;

    printf("Please enter three numbers...\nEnter number 1:\nEnter number 2:\nEnter number 3:");
    scanf("%d %d %d", &num1, &num2, &num3);

    maxInt1 = (num1>=num2) && (num1>=num3);
    maxInt2 = (num2>=num1) && (num2>=num3);
    maxInt3 = (num3>=num1) && (num3>=num2);

    if(maxInt1 == 1){
        printf("%d ist the maximum integer!", num1);
    }
    else if(maxInt2 == 1){
        printf("%d is the maximum integer!", num2);
    }
    else if(maxInt3 == 1){
        printf("%d is the maximum integer!", num3);
    }
    else{
        printf("ERROR");
    }

//--------------------------EXERCISE 2----------------------
int num1, num2, num3, sit1, sit2 , sit3, sit4, sit5, sit6;

printf("Please enter 3 numbers...\n");

printf("Enter number 1: ");
scanf("%d", &num1);

printf("Enter number 2: ");
scanf("%d", &num2);

printf("Enter number 3: ");
scanf("%d", &num3);


sit1 = (num1 <= num2) && (num2 <= num3);
sit2 = (num1 <= num3) && (num3 <= num2);

sit3 = (num2 <= num1) && (num1 <= num3);
sit4 = (num2 <= num3) && (num3 <= num1);

sit5 = (num3 <= num1) && (num1 <= num2);
sit6 = (num3 <= num2) && (num2 <= num1); why is this line not working?

if(sit1==1){
    printf("%d <= %d <= %d\n", num1, num2, num3);
}
else if(sit2==1){
    printf("%d <= %d <= %d\n", num1, num3, num2);
}
else if(sit3==1){
    printf("%d <= %d <= %d\n", num2, num1, num3);
}
else if(sit4==1){
    printf("%d <= %d <= %d\n", num2, num3, num1);
}
else if(sit5==1){
    printf("%d <= %d <= %d\n", num3, num1, num2);
}
else{
    printf("%d <= %d <= %d", num3, num2, num1);
}
//





//-------------------------EXERCISE 3--------------------------


//
//int num, i, prime, optimusprime, notprime;
//printf("Please enter a positive number: ");
//scanf("%d", &num);
//
//
//optimusprime = (num == 1) || (num == 2);
//notprime = (num == 0) || (num * (-1) == num); //2nd half not working -> why?
//
//if(optimusprime == 1){
//    printf("Number is prime!");
//}
//else if(notprime == 1){
//    printf("ERROR...");
//}
//else{
//    for(i=2; i<num; i++){
//
//        prime = (num%i != 0);
//
//        if(prime != 0){
//            printf("Number is prime!");
//            break;
//        }
//        else{
//            printf("Number isn't prime...");
//            break;
//        }
//    }
//}




// ^Firstly, I tried to do:
//for(i=1; i<num; i++){
//         prime = (num%i == 1);
//            if(prime == 1){
//                printf("Number is prime!");
//            }
//            else{
//                printf("Number isn't prime...");
//            }
// Was wrong because if you start with i=1, the result will be num%i=0, and it is much easier to do (num%i != 0) than (num%i == 1)

// Shortcut optimization...
// How to open new page?



















    return 0;
}
