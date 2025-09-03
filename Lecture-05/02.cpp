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
    

};

int Complex :: totalObjects = 0;

int main(){
  Complex c1(56,74);
  Complex c2(98,89);
  c1.get_numbers();
  c2.get_numbers();
}
