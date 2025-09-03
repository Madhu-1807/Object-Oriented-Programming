#include<iostream>
#include<string>


using namespace std;

class state_bank{
  private:
    string name;
    int accountNo;
    float balance;

  public:
    static float total_balance;

    state_bank(string n, int a ,float b){
      this->name = n;
      this->accountNo = a;
      this->balance = b;
      this->total_balance = total_balance + b;
    }

    void get_details(void){
      cout << "Name: " << this->name << "\nAccount Number: " << this->accountNo << "\nBalance: " << this->balance << endl; 
      cout << "Total Balance of Bank : " << total_balance << endl;
    }

};

float state_bank :: total_balance = 0;

int main(){
  state_bank b1("Madhu", 7879809, 3000.00);
  b1.get_details();
  state_bank b2("Madhuri", 7879889, 6000.00);
  
  b2.get_details();
  return 0;
}