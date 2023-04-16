#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student{
public:
    string name;
    string surname;
    int age;
    float gpa;

    Student();
    Student(string name, string surname, int age, float gpa); 
    Student(Student &obj);

    void print_info();
};

#endif