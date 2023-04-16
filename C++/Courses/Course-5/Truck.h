#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : public Vehicle{
private:    
    int payloadCapacity;

public: 
    Truck(string make, string model, int year, int payloadCapacity);

    void setPayloadCapacity(int newPayloadCapacity);

    int getPayloadCapacity();
};

#endif