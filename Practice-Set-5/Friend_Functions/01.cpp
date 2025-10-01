/*Write a C++ program to demonstrate a friend function that accesses
private members of two different classes.*/

#include<iostream>
#include<string>

using namespace std;

class Demo2;

class Demo1{
  int x1;
  int y1;

  public:

  Demo1(int x_val,int y_val){
    this->x1 = x_val;
    this->y1 = y_val;
  }

  friend void cross_multiplier(Demo1 obj1, Demo2 obj2);
};

class Demo2{
  int x2;
  int y2;

  public:

  Demo2(int x_val,int y_val){
    this->x2 = x_val;
    this->y2 = y_val;
  }

  friend void cross_multiplier(Demo1 obj1, Demo2 obj2);
};

void cross_multiplier(Demo1 obj1, Demo2 obj2){
  int result = (obj1.x1 * obj2.x2) + (obj2.y2 * obj1.y1);
  cout << "The result of cross multiplication is " << result << endl;
}

int main(){
  Demo1 obj1(2,3);
  Demo2 obj2(3,2);

  cross_multiplier(obj1,obj2);

  return 0;
}