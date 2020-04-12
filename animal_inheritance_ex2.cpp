#include <iostream>
#include <string>

using std::cout;
using std::string;

class Animal{
    public:
    string name;
    int age;
    string color;
    
    int stripes=5;
};
//even though members are private we know that due to all Animal attributes are private.
class Snake : protected Animal{
   public:
   int length;
   void Makesound(){
       cout<<"Hiss!\n";
   }
};   
class Cat : public Animal{
    public:
    int height;
    void Makesound(){
        cout<<"Purr!"<<"\n";
    }
};

int main(){
    Snake cobra;
    // Cat cat;
    // cat.Makesound();
    // std::cout<<cat.height; // default height set to 0.
    //cobra.Makesound();
    //cobra.name = "black mamba";
    cout<<cobra.stripes;
    //cout<<cobra.name;
}