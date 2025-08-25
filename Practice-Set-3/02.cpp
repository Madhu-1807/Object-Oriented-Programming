#include<iostream>
#include<string>

using namespace std;

class Account{
  private:
    float balance;

  public:
    void setBalance(float balance_var){
      if(balance_var<0){
        cout << "Amount can't be negative" << endl;
        return;
      }

      balance += balance_var;
    }

    void getBalance(){
      cout << "Total Balance: " << balance << endl;
    }
};

int main(){
  Account a1;
  a1.setBalance(1000);
  a1.getBalance();
  a1.setBalance(-70);
  a1.getBalance();

  return 0;

}