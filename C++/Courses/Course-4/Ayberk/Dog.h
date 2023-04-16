//
// Created by ayber on 20.01.2023.
//

#ifndef UNTITLED3_DOG_H
#define UNTITLED3_DOG_H
#include "Animal.h"

class Dog : public Animal{
public:
    string type;

    Dog(const string &name, int age, const string &type);
};


#endif //UNTITLED3_DOG_H
