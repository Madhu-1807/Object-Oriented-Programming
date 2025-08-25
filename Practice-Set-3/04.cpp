#include<iostream>
#include<string>

using namespace std;

class Rectangle{
  private:
    float length;
    float breadth;

  public:
    void setValues(float length_val,float breadth_val){
      length = length_val;
      breadth = breadth_val;  
    }

    void calculateArea(){
      cout << "The area of the rectangle is " << length*breadth << endl;
    }

    void getValues(){
      cout << "Length: " << length << "\nBreadth: " << breadth << endl;
    }
};

int main(){
  Rectangle r1;
  r1.setValues(25.5,30.8);
  r1.getValues();
  r1.calculateArea();

  return 0;

}