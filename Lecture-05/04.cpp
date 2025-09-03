#include<iostream>
#include<string>

using namespace std;

class Complex{
  private:
    int x;
    int y;

  public:
    static int totalObjects;

    Complex(int x1, int y1){
      this->x = x1;
      this->y = y1;
      totalObjects ++;
    }

    void get_numbers(void){
      cout << "x: " << this->x  << "\ny: " << this->y << endl;
      cout << "Total Objects created is " << totalObjects << endl;
    }

    friend void get_sum(Complex c1, Complex c2);


};

void get_sum(Complex c1,Complex c2){
      int real_part = c1.x + c2.x;
      int img_part = c1.y + c2.y; 
      cout << "The number is " << real_part << " + " << img_part << "i " << endl;
    }

int Complex :: totalObjects = 0;

int main(){
  Complex d1(6,4);
  Complex d2(4,5);
  
  get_sum(d1,d2);   

}
