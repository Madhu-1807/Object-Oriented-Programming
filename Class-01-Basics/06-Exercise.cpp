#include<iostream>
using namespace std;
int main(){
  int a ;
  cout<<"Enter a number : ";
  cin>>a;
  
  if(a%5 == 0){
    cout<<"The number is divisible by 5";
  }else if(a%7 == 0){
    cout<<"The number is divisible by 7";
  }else if(a%5 == 0 && a%7 == 0){
    cout<<"The number is divisible by 5 and 7";
  }
  
  
  return 0;
}