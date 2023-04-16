#include "Student.h"

Student::Student()
{
    this->name = "Unknown";
    this->surname = "unknown";
    this->age = 0;
    this->gpa = 0.0;
}

Student::Student(string name, string surname, int age, float gpa)
{
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->gpa = gpa;
}

Student::Student(Student &obj)
{
    this->name = obj.name;
    this->surname = obj.surname;
    this->age = obj.age;
    this->gpa = obj.gpa;
}

void Student::print_info()
{
    cout << "Name: " << this->age << endl;
    cout << "Surname: " << this->surname << endl;
    cout << "Age: " << this->age << endl;
    cout << "GPA: " << this->gpa << endl << endl;
}
