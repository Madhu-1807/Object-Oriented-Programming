#include<iostream>

using namespace std;

int main(){
  int sum = 0, num = 0;
  while(sum < 50){
    cout<<"Enter a number to sum it upto 50: ";
    cin>>num;
    sum += num;
  }

  cout<<"The sum reached 50"<<endl;
  return 0;
  
}