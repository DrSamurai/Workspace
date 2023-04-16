#include <iostream>

using namespace std;

// class Distance{
//     private :
//         int meter;

//         friend int addFive(Distance);
//     public:
//         Distance() : meter(0) {}
// };

// int addFive(Distance d){
//     d.meter += 5;
//     return d.meter;
// }

// class Base
// {
// public:
//     virtual void print()
//     {
//         cout << "Base" << endl;
//     }
// };

// class Derived : public Base
// {
// public:
//     void print()
//     {
//         cout << "Derived!" << endl;
//     }
// };

class Base
{
public:
    virtual void print()
    {
        // coıde
        cout << "aaaaaaaaaaa" << endl;
    }
};

class Derived : public Base
{
public:
    void print() override
    {
        cout << "DSŞLKFMLŞSD" << endl;
    }
};

int main()
{
    // Distance D;
    // cout << "Distance: " << addFive(D);

    // Derived d;
    // Base *base = &d;
    // base->print();

    Derived d;
    d.print();

    // Polymorphism
    // Animal *animal = new Animal()
    // Animal* animal = new Dog();

    return 0;
}