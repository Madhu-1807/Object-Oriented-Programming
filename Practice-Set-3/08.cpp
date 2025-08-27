#include<iostream>
#include<string>

using namespace std;

class Account{
  private:
    float balance;
    int accountNumber;

  public:

    void setValues(float balance_var, int accountNumber_val){
      accountNumber = accountNumber_val;
      if(balance_var<0){
        cout << "Amount can't be negative" << endl;
        return;
      }
      balance = balance_var;
    }

    void setBalance(float balance_var){
      if(balance_var<0){
        cout << "Amount can't be negative" << endl;
        return;
      }

      balance += balance_var;
    }

    void getBalance(){
      cout << "Account Number: " << accountNumber << "\nTotal Balance: " << balance  << endl;
    }
};

int main(){
  Account a1;
  a1.setValues(1000,24052);
  a1.getBalance();
  a1.setBalance(700);
  a1.getBalance();
  a1.setBalance(-700);
  a1.getBalance();

  return 0;

}