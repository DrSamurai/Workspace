#include "Truck.h"

Truck::Truck(string make, string model, int year, int payLoadCapacity): Vehicle(make, model, year){
    this->payloadCapacity = payLoadCapacity;
}

void Truck::setPayloadCapacity(int newPayloadCapacity)
{
    payloadCapacity = newPayloadCapacity;
}

int Truck::getPayloadCapacity(){
    return payloadCapacity;
}