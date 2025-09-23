#include<iostream>
#include<string>
 
using namespace std;

#include"02_head.h"

Books::Books(string name_val, int id_val){
  this->name = name_val;
  this->id = id_val;
}

void Books::get_details(){
  cout << "Name: " << this->name << "\nId: " << this->id << endl;
}