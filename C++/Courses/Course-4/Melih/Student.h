#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student: public Person{
public:
    int studentID;    

    Student(string name, int age, int studentID);

    void printInfo();
    
};

#endif