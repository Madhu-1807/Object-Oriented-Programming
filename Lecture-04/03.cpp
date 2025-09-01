#include<iostream>

using namespace std;

class xy_coordinate{
  private:
    float x;
    float y;

  public:
    void set_value(float a1, float a2);   // declaration outside the class
    void get_value(void);

    // constructor 
    /*xy_coordinate(){
      cout << "Hello World" << endl;
    }*/

    xy_coordinate(float a2){
      this->x = 56.7;
      this->y = a2;
    }

    xy_coordinate(float a1, float a2){
      this->x = a1;
      this->y = a2;
    }
};


/*Decleared in the given syntax

return_type name_of_class :: function*/

void xy_coordinate :: set_value(float a1, float a2){
  this->x = a1;
  this->y = a2;
}

void xy_coordinate :: get_value(void){
  cout << "x : " << this->x << " y : " << this->y << endl;
  this->x = 65;
  this->y = 95;
}

int main(){
  xy_coordinate s1(36.5),s2(45.7,89.7);
  s1.get_value();
  s2.get_value();
  /*s1.set_value(1,2);
  s1.get_value();
  s2.set_value(5,6);
  s2.get_value(); */

  return 0;
}

