#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


//int strfunc(int size, char arr[]){ // ASCII
//    int count = 0;
//    for (int i = 0; arr[i] != '\n' ; ++i) {
//        if (arr[i] >= 48 && arr[i] <= 57 ){
//            count ++;
//        }
//    }
//    return count;
//}

// Write a function that takes in a string and returns the string with all vowels removed.

//char* remove_vow(const char *arr, int size){
//    char empty[size];
//    for(int i=0, j = 0; i < size; i++){
//        if(!(arr[i] == 'A' || arr[i] == 'E' ||arr[i] == 'I' ||arr[i] == 'O' ||arr[i] == 'U'
//        ||arr[i] == 'a' ||arr[i] == 'e' ||arr[i] == 'i' ||arr[i] == 'u' || arr[i] == 'o')){
//            empty[j] = arr[i];
//            j++;
//        }
//    }
//    return empty;
//}

// Write a function that takes in a string and returns a new string with all of the characters in the original string reversed.

// {'M','e','l','i','h'}
//void reverse(char* str, int size){
//    for (int i = 0, j = size-1; i < size/2 ; ++i,j--) {
//        char temp = str[i];
//        str[i] = str[j];
//        str[j] = temp;
//    }
//}

// Write a function that takes in a string and an integer and returns a new string with the integer concatenated to the end of the string, with a space in between.

char * concatenator(char* result, char* str, int num){
    sprintf(result, "%s %d", str, num);
    return result;

}




// Write a function that takes in a string and returns a Boolean
// indicating whether or not the string is a palindrome (i.e. reads
// the same forwards and backwards).




// Write a function that takes in two strings and returns a new string that is the result of alternately taking characters from each string
// (e.g. the first character from the first string, the first character from
// the second string, the second character from the first string, the second
// character from the second string, etc.). If one string is longer than the other,
// append the remaining characters from the longer string to the end of the new string.

/*
    char* str1 = "abc";
    char* str2 = "def";
    ans = "adbecf"

    char* str3 = "abcd";
    char* str4 = "efghij";
    ans = "aebfcgdheij"

    char* str5 = "abcdef";
    char* str6 = "gh";
    ans =  "agbhcde"

*/

int main() {
//    int num;
//    printf("Enter num: ");
//    scanf("%d",&num);
//
//    int* ptr = (int*)malloc(num * sizeof(int));
//
//    for(int i = 0; i<num; i++){
//        printf("Enter element-%d: ",i);
//        scanf("%d",(ptr+i)); // scanf("%d", &ptr[i]);
//    }
//
//    printf("\n\n");
//
//    for(int i = 0; i<num; i++){
//        printf("Element %d ==> %d\n",i,*(ptr+i));
//    }

    //----------------------------

//    int num;
//    printf("Enter number: ");
//    scanf("%d", &num);
//
//    double * ptr = (double *) malloc(num * sizeof(double)); // null
//
//    for (int i = 0; i < num ; ++i) {
//        printf("Enter number-%d:",i);
//        scanf("%lf", ptr + i);
//
//    }
//
//    double sum = 0;
//    for (int i = 0; i < num ; ++i) {
//        sum += ptr[i];
//    }
//
//    double average = sum / num;
//
//    printf("Avg -> %lf", average);
//    free(ptr);

    // calloc malloc

//    char name1[] = "Ayberk";
//    char name2[50] = "Ayberk";

//    char name[20];
//    char surname[20];
//
//    printf("Name: ");
//    scanf("%s", name);
//
//    printf("Surname: ");
//    scanf("%s", surname);
//
//    printf("Your name = %s %s",name,surname); // "BUFFER POISONING!"

//    char name[50]; // {'A','y','b'...}
//    printf("Name: ");
//    fgets(name,sizeof(name),stdin);
//    printf("Your name is %s",name);

    // Mel123i24h24 => 7
//    char str[20];
//    printf("Name:");
//    fgets(str,sizeof(str),stdin);
//
//    printf("%d", strfunc(20,str));

//    printf("%s", remove_vow("Melih Yaz",9));
//    char name[] = "Melih";
//    reverse(name,5);
//    printf("%s",name);



char* str = "Melih"





    return 0;
}
