#include <iostream>
#include <cassert>

class Pyramid{
    private:
    float length_;
    float width_;
    float height_;

    public:
    //getters function
    float GetLength() const {return length_;}
    float GetWidth()  const {return width_;}
    float GetHeight() const {return height_;}

    //setters function
    void SetLength(float length);
    void SetWidth(float width);
    void SetHeight(float height);  
    //actually it should be a function call in argument in volume parameters
    float Volume();

    //constructor
    Pyramid(int length, int width, int height) : length_(length),width_(width) ,height_(height) {}
};
//getter function

//setter function definitions
void Pyramid::SetLength(float length){
    if (length>0)   
       length_ = length; 
    else std::cout<<"Invalid Lenth";
}

void Pyramid::SetWidth(float width){
    if (width>0)
       width_ = width;
}

void Pyramid::SetHeight(float height){
    if (height>0)
       height_ = height; 
}

float Pyramid::Volume(){
    return (float) (length_*height_*width_)/3 ;
}

 //main function

 int main(){
     Pyramid pyramid(1,2,3);
     float answer1=pyramid.Volume();
     std::cout<<answer1<<"\n";
     pyramid.SetLength(-1);
     std::cout<<"\n";
     pyramid.SetLength(3);
     std::cout<<"Pyramid volume now is "<<pyramid.Volume()<<"\n";
   
     return 0;
 }   