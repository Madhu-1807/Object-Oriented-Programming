/*Write a program to create a class Employee with data members name,
id, and salary. Implement:
• A constructor that initializes name and id only.
• A constructor that initializes all three values.*/

#include<iostream>
#include<string>

using namespace std;

class Fraction{
  private:
    int numerator;
    int denominator;

  public:

    Fraction(){
      this->numerator = 0;
      this->denominator = 1;
    }

    Fraction(int n){
      this->numerator = n;
      this->denominator = 1;
    }

    Fraction(int n, int d){
      this->numerator = n;
      this->denominator = d;
    }

    void get_details(void){
      cout << numerator << "/" << denominator << endl;
      cout << "-------------------" << endl;
    }
};

int main(){
  Fraction f1;
  Fraction f2(2);
  Fraction f3(2,4);

  f1.get_details();
  f2.get_details();
  f3.get_details();

  return 0;
}