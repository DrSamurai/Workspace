#ifndef SUV_H
#define SUV_H

#include "Car.h"
#include "Truck.h"

class SUV : public Car, public Truck
{
private:
    bool fourWheelDrive;

public:
    SUV(string make, string model, int year, int numOfDoors, int tankCapacity, int payloadCapacity, bool fourWheelDrive);

    void setFWD(bool fourWheelDrive);
    bool getFWD();
};

#endif