#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


// Write a function that takes in a string and an integer and returns a new string with the integer concatenated to the end of the string, with a space in between.

//char* concatenate(char* str, int num){
//    int strLen = (int)strlen(str);
//    int intLen = snprintf(NULL,0,"%d",num);
//    int resultLen = strLen + intLen + 1;
//
//    char* result = malloc(resultLen+1);
//    sprintf(result, "%s %d", str, num);
//    return result;
//}


// Write a function that takes in a string and returns a Boolean
// indicating whether or not the string is a palindrome (i.e. reads
// the same forwards and backwards).

//bool palindrome(char* str, int size){
//    for(int i = 0, j = size-1; i<size/2; i++,j--){
//        if(str[i] != str[j])
//            return false;
//    }
//    return true;
//}


// Ayberk
// Melih
// AMyebleirhk

//char* two_strings(char* first, char* second, int size_one, int size_two){
//    int s1 = 0, s2 = 0, sAns = 0;
//    char* ans = malloc(size_two + size_one + 1);
//
//    while(s1 < size_one && s2 < size_two){
//        ans[sAns++] = first[s1++];
//        ans[sAns++] = second[s2++];
//    }
//
//    while(s1 < size_one){
//        ans[sAns++] = first[s1++];
//    }
//
//    while(s2 < size_two){
//        ans[sAns++] = second[s2++];
//    }
//
//    return ans;
//}


int main() {

//    printf("%d", palindrome("ABCBA",5));
//    printf("%d", palindrome("ABCBS",5));

//    char str[] = "Melih\0";
//    int age = 22;
//
//    printf("%s", concatenate(str,age));
//    printf("%s", two_strings("Melih","Ayberk",5,6));

    return 0;
}
