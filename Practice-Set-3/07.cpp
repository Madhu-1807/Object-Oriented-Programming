#include<iostream>
#include<string>

using namespace std;

class Rectangle{
  private:
    float radius;
    

  public:
    void setValues(float radius_val){
      radius = radius_val;
 
    }

    void calculateArea(){
      cout << "The area of the circle is " << radius*radius << endl;
    }

    void getValues(){
      cout << "Radius: " << radius<< endl;
    }
};

int main(){
  Rectangle r1;
  r1.setValues(5);
  r1.getValues();
  r1.calculateArea();

  return 0;

}