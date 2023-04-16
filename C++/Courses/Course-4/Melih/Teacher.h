#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"

class Teacher : public Person{
public:
    string department;

    Teacher(string name, int age, string department);

    void printInfo();    

    
};

#endif