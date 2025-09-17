#include <iostream>
#include<string>
#include"01_head.h"

using namespace std;

bank_account :: bank_account(string n,float b){
  this->name = n;
  this->bal = b;
}

void bank_account :: get_values(){
  cout << "Name : "<<this -> name << " Balance : "<<this ->bal<<endl;
}

void bank_account :: deposit(float n1){
  cout << "Name : "<<this -> name << " Balance : "<<this ->bal<<endl;
}

void bank_account :: withdraw(float n2){
  if(this -> bal > 0){
    this -> bal = this-> bal - n2;
  }
  else{
    cout << "low balance";
  }
}