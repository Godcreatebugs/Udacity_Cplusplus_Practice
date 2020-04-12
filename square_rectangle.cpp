#include <iostream>

class Rectangle;

class Square{

public:
Square(int s) : side_(s){}

 private:
 int side_;
 // declaration of class(Rectnangle) is done so dont make mistakes 
 friend class Rectangle;
};

class Rectangle{
    public:
    float Area() const;
    Rectangle(Square s);
    
    private:
    float length_;
    float width_;
};
Rectangle::Rectangle(Square s) : length_(s.side_), width_(s.side_){};  

float Rectangle::Area() const{
    return Rectangle::width_ * Rectangle::length_;
}  

int main(){
    Square square(4);
    Rectangle rectangle(square);
    float area_rect=rectangle.Area();
    std::cout<<area_rect;

}