/*
Now, this is really owseme thing consider wheel class which is just used incar.
Car need not have to inherit from the wheels so what we do is we do composition and 
the main difference between "Has it" vs "is"
Cat has legs and paws and what not. - Composition
But, Cat is a mmamel - Inheritance.
*/

#include <iostream>
#include <cmath>
#include <assert.h>

#define pi 3.1415
// Define pi

// Define Line Class

class Line{
    public:
    //Line(): length_(50.0) {}
    float length_;
};
    // Define protected attribute length
class Circle : public Line{
    public:
    //constructors
    Circle(float radius) : length_(radius){}
    //functions
    void SetRadius(float radius_);
    float GetArea(float radius);
};    
// Define Circle subclass

    // Define public setRadius() and getArea()

void Circle::SetRadius(float length){
    Line::length_ = length;
}

float Circle::GetArea(float radius){
    return   pi * pow(radius,2); 
}
// Test in main()
int main() 
{
    // LineSegment radius {3};
    // Circle circle(radius);
    // assert(int(circle.Area()) == 28);

    Line radius {3};
    Circle circle(radius);
    assert(int(circle.GetArea)==28);
}