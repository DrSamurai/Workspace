#include <iostream>
#include "Person.h"
#include "Student.h"

int main()
{

    // Object Creation!

    // ClassName objName = *new Constructor();
    // ClassName* objName = new Constructor();

    // Person melih = *new Person();
    // Person *ayberk = new Person("Ayberk", "Saygi", 22);
    // Person *can = new Person(*ayberk);

    // melih.printInfo();
    // ayberk->printInfo();
    // can->printInfo();

    
    Student melih = *new Student();
    Student* ayberk = new Student("Ayberk", "Saygi", 22, 4.0);
    Student* can = new Student(melih);

    melih.print_info();
    ayberk->print_info();
    can->print_info(); 
    

    return 0;
}