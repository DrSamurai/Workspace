#include <iostream>
#include "SUV.h"

int main()
{
    SUV *mySUV = new SUV("Toyota", "4WD RAV4", 2020, 4, 80, 1000,true);
    cout << "Make: " << mySUV->Car::getMake() << endl;
    cout << "Model: " << mySUV->Car::getModel() << endl;
    cout << "Year: " << mySUV->Car::getYear() << endl;
    cout << "Number of doors: " << mySUV->Car::getNumberOfDoors() << endl;
    cout << "Trunk capacity: " << mySUV->Car::getTankapacity()<< endl;
    cout << "Payload capacity: " << mySUV->getPayloadCapacity() << endl;
    cout << "Four wheel drive: " << mySUV->getFWD() << endl;

    return 0;
}