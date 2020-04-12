#include <iostream>
#include <string>

class BankAccount
{
  private:
      // Done: declare member variables
    int accountnumber_{0};
    std::string accountholdername_ {" "};
    int fundsavailable_{0};
    
   
  public:
      // Done: declare setters
   BankAccount(int accountnumber_,std::string accountholdername_,int fundsavailable_);   
   void AccountNumber(int accountnumber);
   void AccountName(std::string accountname);
   void FundsAvailable(int fundsavailable);
   //Done: declare getters
   int AccountNumber(int accountnumber_);
   std::string AccountName(std::string accountholdername_);
   int FundsAvailable(int fundsavailable_)
    

// Done: implement getters
BankAccount::BankAccount 
int BankAccount::AccountNumber() return accountnumber_;
std::string BankAccount::AccountName() return accountholdername_;
int BankAccount::FundsAvailable() return fundsAvailable_ ;


//Done : Implement Setters

void BankAccount::Accountame(int accountnumber)
        accountnumber_=accountnumber;

void BankAccount::AccountName(std::string accountname)
        accountholdername_ =  accountname;   
void FundsAvailable(int fundsavailable)
         fundsavailable_ = fundsavailable;


BankAccount::BankAccount(int accountnumber_,std::string accountholdername_,int fundsavailable_){
    accountnumber_ = AccountNumber(int )
}
int main(){
    // TODO: instantiate and output a bank account
    
  
}