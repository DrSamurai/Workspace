#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>

using namespace std;

class Vehicle{
    private:
        string make;
        string model;
        int year;
        
    public: 
        Vehicle(string make, string model, int year);

        void setMake(string newMake); // mutator method
        string getMake(); // accessor method

        void setModel(string newModel);
        string getModel();

        void setYear(int newYear);
        int getYear();

};

#endif