#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person{
public:
    // attributes
    string name;
    string surname;
    int age;

    // constructors

    // default constructor
    Person();
    // parameterised constructor
    Person(string name, string surname,     int age);
    // copy constructor
    Person(Person &obj);

    // methods
    void printInfo();
};

#endif