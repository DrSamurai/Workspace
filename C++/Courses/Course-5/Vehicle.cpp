#include "Vehicle.h"

Vehicle::Vehicle(string make, string model, int year)
{
    this->make = make;
    this->model = model;
    this->year = year;
}

void Vehicle::setMake(string newMake)
{
    make = newMake;
}

string Vehicle::getMake()
{
    return make;
}

void Vehicle::setModel(string newModel)
{
    model = newModel;
}

string Vehicle::getModel(){
    return model;
}


void Vehicle::setYear(int newYear){
    year = newYear;
}

int Vehicle::getYear(){
    return year;
}