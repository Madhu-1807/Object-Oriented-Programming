/*8. Print all odd numbers between 1 and 50 using a while loop.*/

#include<iostream>

using namespace std;

int main (){

  int num = 1;
  while(num <= 50){
    if(num % 2 != 0){
      cout << num << endl;
    }
    num++;
  }
  return 0;
}