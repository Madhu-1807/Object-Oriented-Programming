#include<iostream>
#include<string>

using namespace std;

class Complex{
  float x;
  float y;
  public:
    Complex (float a,float b){
      this->x = a;
      this->y = b;
      cout << "New complex number has been created with address "  << this << " and " << x << " + " << y << "i" << endl;
    }

    Complex operator* (const Complex& second_obj){
      Complex c3(0,0);
      c3.x = this->x * second_obj.x - this->y * second_obj.y;
      c3.y = this->x * second_obj.y + this->y * second_obj.x;
      return c3;
    }

    void get_details(){
      cout << "Complex Number:" << this->x << " + " << this->y << "i " << endl; 
    }

    ~Complex(){
      cout << "The complex number is destructed for " << this << endl;
    }
};

int main(){

  Complex c1(3,4),c2(5,4);
  c1.get_details();
  Complex c4 = c1*c2;
  c4.get_details();

  return 0;

  
}