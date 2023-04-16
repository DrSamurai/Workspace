#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"


class Car: public Vehicle{
private: 

    int numOfDoors;
    int tankCapacity;

public:

    Car(string make, string model, int year, int numOfDoors, int tankCapacity);

    void setNumberOfDoors(int newDoors);
    int getNumberOfDoors();

    void setTankCapacity(int newTank);
    int getTankapacity();
};

#endif