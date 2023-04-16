#include "Car.h"

Car::Car(string make, string model, int year, int numOfDoors, int tankCapacity) : Vehicle(make, model, year)
{
    this->numOfDoors = numOfDoors;
    this->tankCapacity = tankCapacity;
}

void Car::setNumberOfDoors(int newDoors)
{
    numOfDoors = newDoors;
}

int Car::getNumberOfDoors()
{
    return numOfDoors;
}

void Car::setTankCapacity(int newTank)
{
    tankCapacity = newTank;
}

int Car::getTankapacity()
{
    return tankCapacity;
}
