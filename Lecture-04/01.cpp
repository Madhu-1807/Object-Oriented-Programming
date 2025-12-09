#include<iostream>
#include<string>

using namespace std;

class bank_account
{
    private:
        string name; //data members
        float bal;
    public: 

        bank_account(){
            name = "Null";
            bal = 0.0;
        }
        
        bank_account(string n){
            this->name = n;
        }

        bank_account(string n,float b){    //constructors
          this->name = n;
          this->bal = b;
        }
        void get_values(void)
        {
            cout << "Name : "<<this -> name << " Balance : "<<this ->bal<<endl;
        }
        void deposit(float n1)
        {
            this ->bal = this -> bal + n1;
        }
        void withdraw(float n2)
        {
            if(this -> bal > 0)
            {
                this -> bal = this-> bal - n2;
            }
            else{
                cout << "low balance";
            }
        }

};
int main()
{
    bank_account a1("Madhu",1000.00);
    bank_account a2("Sahanaa",10000.00);
    bank_account a3;
    
    a1.get_values();
    a2.get_values();
    a3.get_values();

   /*
   a1.deposit(450.00);
    a2.deposit(450.00);
    a1.get_values();
    a2.get_values();
    a1.withdraw(500);
    a2.withdraw(500);
    a1.get_values();
    a2.get_values();
    */ 
    return 0;
}