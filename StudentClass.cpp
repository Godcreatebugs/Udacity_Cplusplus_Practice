#include <iostream>
#include <cassert>

class Student{
    private:
    std::string name_;
    int grade_;
    float gpa_;
    bool Validate(){
        if ((1<=grade_<=12) && (0.0<=gpa_<=4.0)){
            return true;
        }      
        else{
            throw std::invalid_argument("This is invalid bro!");
            return false;
        }
        }   
    
    public:
    //accessors -getters function
    std::string GetName() const {return name_;}
    int GetGrade() const {return grade_;}
    float GetGpa() const {return gpa_;}

    //mutators declaraion
    void SetName(std::string name);
    void SetGrade(int grade);
    void SetGpa(float gpa);

    //a constructor
    Student(std::string name, int grade, float gpa) : name_(name), grade_(grade), gpa_(gpa_) {} 

};

// Setters definitions with invariants
void Student::SetName(std::string name){
    name_ = name;
}

void Student::SetGrade(int grade){
    
    Student::Validate();
    grade_ = grade; 
    //if (1<=grade<=12) grade_=grade;
    //else std::cout<<"Invalid grade\n";

}

void Student::SetGpa(float gpa){
    gpa_ = gpa;
    Student::Validate();
    //if (0.0<=gpa<=4.0) gpa_=gpa; 
    //else std::cout<<"Invalid GPA\n";
}    

//main function

int main(){
    Student student("Piyush",8,(int) 3);
    assert(student.GetName() == "Piyush");
    assert(student.GetGrade() == 8);
    //std::cout<<student.GetGpa();
    //assert(student.GetGpa() == 3.);
    
    //try and except statements

    bool check = false;

    try{
        check=student.SetGrade(20);
        // std::cout<<"This checks";
        std::cout<<check;
    }
    catch(...){
        check=true;
    }
    assert(check);
    return 0;
}
/*
#include <cassert>
#include <stdexcept>
#include <string>

using std::string;

// TODO: Define "Student" class
class Student {
 public:
  // constructor
  Student(string name, int grade, float gpa) : name_(name), grade_(grade), gpa_(gpa) {
      Validate();
  }
  // accessors
  string Name() const {
      return name_;
  }
  int Grade() const {
      return grade_;
  }
  float GPA() const {
      return gpa_;
  }
    
  // mutators
  void Name(string name) {
      name_ = name;
      Validate();
  }
  void Grade(int grade) {
      grade_ = grade;
      Validate();
  }
  void GPA(float gpa) {
      gpa_ = gpa;
      Validate();
  }

 private:
 string name_;
 int grade_;
 float gpa_;
 void Validate() {
     if(Grade() < 0 || Grade() > 12 || GPA() < 0.0 || GPA() > 4.0)
         throw std::invalid_argument("argument out of bounds");
 }
};

// TODO: Test
int main() {
    Student david("David Silver", 10, 4.0);
    assert(david.Name() == "David Silver");
    assert(david.Grade() == 10);
    assert(david.GPA() == 4.0);
    
    bool caught{false};
    try {
        david.Grade(20);
    }
    catch(...) {
        caught = true;
    }
    assert(caught);
}
*/