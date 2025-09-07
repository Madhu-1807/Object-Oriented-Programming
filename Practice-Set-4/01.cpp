/*1. Define a class Rectangle with data members length and breadth.
Write a constructor to initialize both and a member function to calcu-
late the area.*/

#include<iostream>
#include<string>

using namespace std;

class Rectangle{
  private:
    float length;
    float breadth;

  public:
    Rectangle(float l,float b){
      this->length = l;
      this->breadth = b;
    }

    void calculateArea(void){
      float result = this->length * this->breadth;
      cout << "The area of the rectangle is " << result << endl;
    }
};

int main(){
  Rectangle r1(4,5);
  r1.calculateArea();
}

