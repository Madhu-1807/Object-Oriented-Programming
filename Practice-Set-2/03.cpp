/*3. Print the multiplication table of 
a given number using a do-while loop.*/

#include<iostream>

using namespace std;

int main(){

  int num;
  int i = 1;
  cout << "Enter a number to get multipliation table: " ;
  cin >> num;

  do{
    cout << num << " * " << i << " = " << num*i << endl;
    i++;
  }while(i < 11);

  return 0;
}