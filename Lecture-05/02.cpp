#include<iostream>
#include<string>

using namespace std;

//Static member

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
  Complex c1(56,74);  //x=56,y =74 Total=3
  Complex c2(98,89);  //x=98,y=89 Total=3
  Complex c3(45,23);  //x=45 y=23 Total=3
  c1.get_numbers();
  c2.get_numbers();
  c3.get_numbers();
}
