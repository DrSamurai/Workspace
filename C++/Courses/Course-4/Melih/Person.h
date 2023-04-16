#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age);
    void printInfo();
};


#endif