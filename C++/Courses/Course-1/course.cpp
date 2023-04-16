#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

void twoSum(int nums[], int n, int target, int result[]);
void sort(int nums[], int numOfElements);

// 

int getMin(int nums[], int size){
    int min = nums[0];

    for (int i = 1; i < size; i++)
    {
        if (nums[i]<min)
        {
            min = nums[i];
        }
    }
    return min;
}

int getMax(int nums[], int size){
    int max = nums[0];

    for (int i = 1; i < size; i++)
    {
        if (nums[i]>max)
        {
            max = nums[i];
        }
    }
    return max;
}


int main()
{
    system("clear");

    // string name = "Melih";
    // int age = 20;
    // float gpa = 3.0;

    // cout << "Name = " << name <<endl;
    // cout << "Age = " << age << endl;
    // cout << "GPA = " << gpa <<endl;

    // string name1, name2, name3;

    // cout << "Name: ";
    // cin >> name1 >> name2 >> name3;

    // cout << "Your name is: " << name1 << endl
    //      << name2 << endl
    //      << name3 << endl;

    // int num, counter = 0;
    // cout << "Enter number: ";
    // cin >> num;
    // int flag = num < 2 ? 0 : 1;

    // for (int i = 2; i < (int)sqrt(num); i++)
    // {
    //     counter++;
    //     if (num % i == 0)
    //     {
    //         flag = 0;
    //         break;
    //     }
    // }

    // if (flag == 1)
    //     cout << "Number is prime!" << endl;
    // else
    //     cout << "Number is not prime!" << endl;

    // cout << "Counter: " << counter << endl;

    /*

Given an array of integers nums and an integer target, return indices
of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and
you may not use the same element twice. You can return the answer in
any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.

    */

    // int nums[] = {2, 7,11,15};
    // int target = 9;
    // int n = 4;
    // int result[2];

    // twoSum(nums, n, target, result);

    // cout << "[" << result[0] << "," << result[1] << "]" << endl;

    // int nums[] = {3, 6, 4, 2, 1, 9, 3, 5, 8};
    // sort(nums, 9);

    // for (int j = 0; j < 9; j++)
    // {
    //     cout << nums[j] << " ";
    // }

    // int nums[] = {3, 6, 4, 2, 1, 9, 3, 5, 8};
    // cout << "Min: " << getMin(nums, 9) << endl;
    // cout << "Max: " << getMax(nums, 9) << endl;

    /*

            How do you reverse a string in C++?
            How do you check if a string is a palindrome in C++?
            How do you concatenate two strings in C++?
            How do you find the length of a string in C++?
            How do you compare two strings in C++?
            How do you convert a string to an integer in C++?
            How do you remove a specific character from a string in C++?
            How do you find the first occurrence of a substring in a string in C++?
            How do you convert a string to lowercase or uppercase in C++?


            Signatures:

            string reverseString(string input);
            bool isPalindrome(string input);
            string concatenateStrings(string str1, string str2);
            int findStringLength(string input);
            bool compareStrings(string str1, string str2);
            int convertStringToInt(string input);
            string removeCharacter(string input, char character);
            int findSubstring(string input, string substring); "Ayberk" , "berk" => 2
            string convertCase(string input, bool toUpper); // 0 -> small , 1 -> uC
    */

    return 0;
}

// void twoSum(int nums[], int n, int target, int result[])
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 result[0] = i;
//                 result[1] = j;
//                 return;
//             }
//         }
//     }
// }

void sort(int nums[], int numOfElements) // Bubble Sort!
{
    // 2 3 4 6 8 9
    // 2 3 4 6 8 9

    // compare any num with next of it
    // if firstNum > secNum swap
    // repeat for numOfElement times

    for (int i = 0; i < numOfElements; i++)
    {
        for (int j = 0; j < numOfElements - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}
