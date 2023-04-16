#include "Person.h"

Person::Person(){
    this->name = "Unknown!";
    this->surname = "Unknown!";
    this->age = 0;
}

Person::Person(string name, string surname, int age){
    this->age = age;
    this->name = name;
    this->surname = surname;
}

Person::Person(Person &obj){
    this->name = obj.name;
    this->surname = obj.surname;
    this->age = obj.age;
}

void Person::printInfo()
{
    cout << "Name: " << this->name << endl;
    cout << "Surname: " << this->surname << endl;
    cout << "Age: " << this->age << endl;
    cout << endl;
}