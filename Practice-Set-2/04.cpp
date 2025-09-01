/*Find the sum of the first N natural numbers 
(input N) using a for
loop.*/

#include<iostream>

using namespace std;

int main(){
  int num;
  cout << "Enter a number: ";
  cin >> num;
  int sum = 0;
  for(int i =0;i<=num;i++){
    sum += i;
  }
  cout << "The sum of first " << num << " is " << sum << endl;
  return 0;

}