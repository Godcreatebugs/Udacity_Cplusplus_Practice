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

class Car : public Vehicle {
public:
    bool sunroof = false;
};

class Chopper : public Vehicle{
    public:
    bool wings =true;
    void Fly(){
        std::cout<<"FOOOOOOOOO!\n";
    }
};
class Bicycle : public Vehicle {
public:
    bool kickstand = true;
};

int main() 
{
    Car car;
    car.wheels = 4;
    car.sunroof = true;
    car.Print();
    if(car.sunroof)
        std::cout << "And a sunroof!\n";
    Chopper chopper;
    if (chopper.wings)
    chopper.Fly();
    return 0;    
};