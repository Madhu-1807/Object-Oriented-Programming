#include<iostream>
#include<cstdlib>
#include<cmath>
#include<string>

using namespace std;

int sqrt(int n){
    return n*n;            // This ovverrides the in-built function and givess the value 99.
}

namespace myLibrary{
  int cqrt(int n){
    return n*n*n;            // This helps in using the in-bulit function.
  }

  int qart(int n){
    return n*n*n*n;
  }
};

using namespace myLibrary;   // This is used to called the user defined function. 
int main(){
  int a = 9;
  int b = sqrt(a);           // Else something::abs1 also works
  cout << "Value of b is " << b << endl;
  b = cbrt(a);
  cout << "Value of b is " << b << endl;
  b = qart(a);
  cout << "Value of b is " << b << endl;

  return 0;
}