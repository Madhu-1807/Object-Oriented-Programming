/*Create a class Rectangle with private length and width and use a friend
function to calculate the area.*/

#include<iostream>
#include<string>

using namespace std;

class Rectangle{
  float length;
  float breadth;

  public:
    Rectangle(float length_val, float breadth_val){
      this->length = length_val;
      this->breadth = breadth_val; 
    }

    friend void Area(Rectangle r);

};

void Area(Rectangle r){
  cout << "The area iof the rectangle is " << r.length * r.breadth << endl;
}

int main(){
  Rectangle r1(12,12);
  Area(r1);

  return 0;
}