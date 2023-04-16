#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>

using namespace std;

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

           bool compareStrings(string str1, string str2);
           int convertStringToInt(string input);
           int findSubstring(string input, string substring); "Ayberk" , "berk" => 2
           string convertCase(string input, bool toUpper); // 0 -> small , 1 -> uC
   */

int findStringLength(string input)
{
    int counter = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        counter++;
    }
    return counter;
}

bool isPalindrome(string input)
{

    int size = findStringLength(input);

    for (int i = 0; i < size / 2; i++)
    {
        if (input[i] != input[size - 1 - i])
        {
            return false;
        }
    }
    return true;
}

string reverseString(string input)
{
    int size = findStringLength(input);
    string temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp[i] = input[i];
        input[i] = input[size - 1 - i];
        input[size - 1 - i] = temp[i];
    }
    return input;
}

std::string removeCharacter(std::string input, char character)
{
    std::string newString = "";
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] != character)
        {
            newString += input[i];
        }
    }
    return newString;
}

// int convertStringToInt(string input); //stoi(str) ... e.g. if string = "mel24ih6" -> for loop to find the ints -> create array -> atoi(arr)...


string concatenateStrings(string str1, string str2)
{
    string str3 = str1 + str2;
    return str3;
}

//------------------------------- Structs-----------------------------------

struct Person
{
    string name;
    int age;
    float salary;
};

int main()
{
    string name = "SAASG";
    string lastName = "Yaz";
    char letter = 'G';
    // cout << "Length of \""<<name<<"\": " << findStringLength(name) << endl;
    // cout << "IsPalindrome ("<<name<<"): " << isPalindrome(name) << endl;
    // cout << "Reverse of " << name << ": " << reverseString(name)<<endl;
    // cout << "Removed " << letter << ": " << removeCharacter(name, letter) << endl;
    // cout << concatenateStrings(name, lastName) << endl;

    // struct Person berke;

    // cout << "Enter your name: " << endl;
    // cin >> berke.name;
    // cout << "Name: " << berke.name << endl;

    // cout << "Enter your age: " << endl;
    // cin >> berke.age;
    // cout << "Age: " << berke.age << endl;

    // cout << "Enter your salary: " << endl;
    // cin >> berke.salary;
    // cout << "Salary: " << berke.salary << endl;

    return 0;
}