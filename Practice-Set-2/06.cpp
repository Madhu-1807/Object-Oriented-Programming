/*6. Print the digits of a number 
in reverse order using a do-while loop.*/

#include <iostream>

using namespace std;

int main(){
  int num;
  cout << "Enter an number : ";
  cin >> num;

  int rem, result = 0;

  do{
    rem = num%10;
    result *= 10;
    result += rem;
    num = num/10;

  }while(num > 0);

  cout << "The reversed number is " << result << endl;

  return 0;
}

