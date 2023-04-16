#include "Teacher.h"

Teacher::Teacher(string name, int age, string department):Person(name, age){
    this->department = department;
}

void Teacher::printInfo(){
    cout<<"Name: "<< name<< endl;
    cout<<"Age: "<< age<< endl;
    cout<<"Department: "<< department<< endl; 
}