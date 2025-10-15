#include<iostream>
#include<cstdlib>
#include<cmath>
#include<string>

using namespace std;

/* int abs(int n){
    return 99;            // This ovverrides the in-built function and givess the value 99.
  } */

namespace something{
  int abs1(int n){
    return 99;            // This helps in using the in-bulit function.
  }
}

using namespace something;   // This is used to called the user defined function. 
int main(){
  int a = -5;
  int b = abs1(a);           // Else something::abs1 also works
  cout << "Value of b is " << b << endl;
}