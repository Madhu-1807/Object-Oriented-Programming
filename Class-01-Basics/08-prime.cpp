#include<iostream>
#include<cmath>

using namespace std;

int main(){
  int number;
  cout << "Enter a number: " ;
  cin >> number;

  for(int i=2;i<sqrt(number);i++){
    if(number%i == 0){
      cout<<"Number is not prime"<<endl;
      return 0;
    }

  }
  cout<<"Number is prime"<<endl;
  return 0;

}

