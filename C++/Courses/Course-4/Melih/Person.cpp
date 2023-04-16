#include "Person.h"

Person::Person(string name, int age) : name(name) , age(age) {}

void Person::printInfo(){
    cout<< "Name: "<< name<< endl;
    cout<<"Age: "<< age<< endl;
}