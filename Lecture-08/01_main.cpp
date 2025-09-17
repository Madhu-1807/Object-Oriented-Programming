#include<iostream>
#include<string>

#include"01_head.h"

using namespace std;

int main()
{
    bank_account a1("Madhu",1000.00);
    bank_account a2("Sahanaa",10000.00);
    
    a1.get_values();
    a2.get_values();
    a1.deposit(450.00);
    a2.deposit(450.00);
    a1.get_values();
    a2.get_values();
    a1.withdraw(500);
    a2.withdraw(500);
    a1.get_values();
    a2.get_values();
    return 0;
}