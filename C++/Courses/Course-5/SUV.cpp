#include "SUV.h"

SUV::SUV(string make, string model, int year, int numOfDoors, int tankCapacity, int payloadCapacity, bool fourWheelDrive) : Truck(make, model, year, payloadCapacity), Car(make, model, year, numOfDoors, tankCapacity)
{
    this->fourWheelDrive = fourWheelDrive;
}

void SUV::setFWD(bool fourWheelDrive){
    this->fourWheelDrive = fourWheelDrive;
}

bool SUV::getFWD(){
    return fourWheelDrive;
}
