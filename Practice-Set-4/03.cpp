/*3. Create a class Complex with two data members real and imag. Over-
load constructors to:

• Initialize both to zero (default constructor).
• Initialize with one value (real part only).
• Initialize with two values (real and imaginary parts).*/

#include<iostream>
#include<string>

using namespace std;

class Complex{
  private:
    int x;
    int y;

  public:

    Complex(){
      this->x = 0;
      this->y = 0;

    }

    Complex(int x1){
      this->x = x1;
      this->y = 0;

    }

    Complex(int x1, int y1){
      this->x = x1;
      this->y = y1;

    }

    void get_numbers(void){
      cout << "x: " << this->x  << "\ny: " << this->y << endl;
      cout << "-----------"  << endl;
    }


};


int main(){
  Complex d1;
  Complex d2(4);
  Complex d3(4,5);

  d1.get_numbers();
  d2.get_numbers();
  d3.get_numbers();
  
}
