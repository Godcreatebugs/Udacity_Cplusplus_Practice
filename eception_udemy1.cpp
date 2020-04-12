#include <iostream>
#include <string>

using std::cout;
using std::string; 
using std::endl;



//MightGoWrong()

void MightGoWrong(){
   
   bool int_err = true;
   bool string_arr = true;
   bool char_err = true;
// This is generic or user made error
//throw is like return program ends there
   if (int_err){
       cout<<"int error\n";
       throw 8;
   else if (string_arr)
   {
       cout<<"String error\n";
       throw string("A string error")
   }
   else if(char_err){
       cout<<"Char error\n";
       throw "Character Array(C style error)";
   } 

}




int main(){
    

    try{
         MightGoWrong();
    }
    catch(int e){
        cout<<"The int eroor code is: "<<e<<endl;
    }
    catch(char arr*){
        cout<<"The character array error code: "<<arr<<endl;
    }
    catch(string p){
        cout<<"The string error code: "<<p<<endl;
    }
    return 0;
}