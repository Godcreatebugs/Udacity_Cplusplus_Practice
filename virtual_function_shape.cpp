// Example solution for Shape inheritance
#include <assert.h>
#include <cmath>
#include <iostream>

#define pi 3.14159
// TODO: Define pi

// TODO: Define the abstract class Shape
  // TODO: Define public virtual functions Area() and Perimeter()
  // TODO: Append the declarations with = 0 to specify pure virtual functions
class Shape{
    public:
    //purely virtual class which wont even allow to instantiate object
    virtual float Area() const =0;
    virtual float Perimeter() const =0;
};
// TODO: Define Rectangle to inherit publicly from Shape
  // TODO: Declare public constructor
  // TODO: Override virtual base class functions Area() and Perimeter()
  // TODO: Declare private attributes width and height
class Rectangle : public Shape {
    private:
    float width_;
    float height_;
    public:
    Rectangle(float width, float height) : width_(width) , height_(height){}
    float Area() const{
        return width_ * height_;
    }
    float Perimeter() const{
        return  2*(width_ + height_);
    }
};
// TODO: Define Circle to inherit from Shape
  // TODO: Declare public constructor
  // TODO: Override virtual base class functions Area() and Perimeter()
  // TODO: Declare private member variable radius
class Circle : public Shape {
  private:
    float radius_;
  public:
    Circle(float radius) : radius_(radius){}
    float Area() const{
        return pi * radius_ * radius_;
    }
    float Perimeter() const {
        return 2 * pi * radius_;
    }
};
// Test in main()
int main() {
  double epsilon = 0.1; // useful for floating point equality

  // Test circle
  Circle circle(12.31);
  assert(abs(circle.Perimeter() - 77.35) < epsilon);
  assert(abs(circle.Area() - 476.06) < epsilon);

  // Test rectangle
  Rectangle rectangle(10, 6);
  std::cout<<rectangle.Perimeter();
  assert(rectangle.Perimeter() == 32);
  assert(rectangle.Area() == 60);
}