/*Write a program to find the 
factorial of a number using a while loop.*/

#include <iostream>

using namespace std;

int main(){
  int num;
  cout << "Enter a number : " ;
  cin >> num; 
  long int factorial = 1;

  int i = 1;

  while(i <= num){
    factorial *= i;
    i++;
  }

  cout << "The factorial of " << num << " is " << factorial << endl;
  return 0;

}