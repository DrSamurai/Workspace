#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"


int main(){

    Teacher* teacher = new Teacher("Zeki", 32, "Primary School");
    Student* student = new Student("Melih", 20, 23);

    teacher->printInfo();
    student->printInfo();

    return 0;
}