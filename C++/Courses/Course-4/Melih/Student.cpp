#include "Student.h"


Student::Student(string name, int age, int studentID) : Person(name, age){
    this->studentID = studentID;
}

void Student::printInfo(){
    cout<<"Name: "<< name<< endl;
    cout<<"Age: "<< age<< endl;
    cout<<"Student Id: "<< studentID<< endl;
}