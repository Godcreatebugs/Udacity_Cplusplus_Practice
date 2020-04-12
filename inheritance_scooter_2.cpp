// This example demonstrates the privacy levels
// between parent and child classes
#include <iostream>
#include <string>
using std::string;

class Vehicle {
public:
    int wheels = 0;
    string color = "blue";
    
    void Print() const
    {
        std::cout << "This " << color << " vehicle has " << wheels << " wheels!\n";
    }
};

class Car : protected Vehicle {
public:
    bool sunroof = false;
};

class Bicycle : public Vehicle {
public:
    bool kickstand = true;
};

class Scooter : private Vehicle {
public:
    bool electric = false;
};

int main() 
{
    Car car;
    Bicycle bicycle;
    Scooter scooter;
    //std::cout<<std::boolalpha(scooter.electric);
    std::cout<<car.sunroof<<"\n";    
    std::cout<<scooter.electric<<"\n";
    std::cout<<scooter.wheels<<"\n";
    std::cout<<car.color<<"\n";

};