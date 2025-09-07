/*4. Implement a class BankAccount with data members accountNumber,
balance. Write multiple constructors for:
• Default initialization.
• Initialization with account number only.
• Initialization with account number and balance.*/

#include<iostream>
#include<string>

using namespace std;

class Account{
  private:
    int accountNo;
    float balance;

  public:

    Account(){
      this->accountNo = 0;
      this->balance = 0.0;
    }

    Account(int a){
      this->accountNo = a;
      this->balance = 0.0;
    }

    Account(int a ,float b){
      this->accountNo = a;
      this->balance = b;
    }

    void get_details(void){
      cout << "Account Number: " << this->accountNo << "\nBalance: " << this->balance << endl; 
      cout << "-----------"  << endl;
    }

};



int main(){
  
  Account a1;
  Account a2(2343243);
  Account a3(7879809, 3000.00);

  a1.get_details();
  a2.get_details();
  a3.get_details();
  return 0;
}