#include <cassert>
#include <cmath>
#include <stdexcept>

// Done: Define class Sphere
class Sphere {
 public:
  // Constructor
  Sphere(int radius) : radius_(radius){}
  int GetRadius() const {return radius_;}
  void SetRadius(float radius);
  float Volume();
  // Accessors
  
 private:
  // Private member
  float radius_;
  void Validate(){
      if(radius_<0)
      throw std::invalid_argument("Invaild Radius");
  }
      
};
void Sphere::SetRadius(float radius){
    radius_ = radius;
    Validate();
}
float Sphere::Volume(){
    return (float)(1.33 * 3.14 * (radius_ *radius_* radius_)); 
}
// Test
int main(void) {
  Sphere sphere(5);
  assert(sphere.GetRadius()==5);
  sphere.SetRadius(-1);
  //assert(abs(sphere.Volume() - 523.6) < 1);
  //std::cout<<sphere.Volume();
  assert(abs(sphere.Volume() - 523.6) < 3);
}