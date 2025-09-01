/*2. Print the first 10 even numbers using a while loop.*/


#include<iostream>

using namespace std;

int main(){
  int i = 1;
  int count = 0;
  while(count < 10){
    if(i%2 == 0){
      cout << i << " "; 
      count++;
    }  
    i++;  
  }

  return 0;
}