#include <iostream>
#include "Dog.h"

int main() {
    Dog* dog = new Dog("Alex",5,"Labrador");
    cout<<dog->name<<endl;
    cout<<dog->age<<endl;
    cout<<dog->type<<endl;

    return 0;
}
