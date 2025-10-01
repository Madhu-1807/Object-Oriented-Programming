/*Write a program with a default constructor that initializes values and
a function to display them.*/

#include<iostream>
#include<string>

using namespace std;

class Demo{
  int x,y,z;

  public:

    Demo(){
      this->x = 0;
      this->y = 0;
      this->z = 0;
    }

    void display(){
      cout << "x: " << this->x << "\ny: " << this->y << "\nz: " << this->z << endl;
    }
};

int main(){
  Demo d1;
  d1.display();
  return 0;
}
