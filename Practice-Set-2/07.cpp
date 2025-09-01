/*7. Check whether a number is prime or not using a for loop.*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
  int num;
  cout << "Enter a number : ";
  cin >> num;


  for(int i=2;i<sqrt(num);i++){
    if(num%i == 0){
      cout<<"Number is not prime"<<endl;
      return 0;
    }
  }
  cout<<"Number is prime"<<endl;
  return 0;

}
