/*Write a program where a friend function swaps private variables of
two classes.*/

#include<iostream>
#include<string>

using namespace std;

class Swap2;

class Swap1{
  int num1;

  public:
    Swap1(int val){
      this->num1 = val;
    }

    void display(){
      cout << "Number: " << this->num1 << endl;
    }

    friend void swapper(Swap1 &obj1,Swap2 &obj2);
};

class Swap2{
  int num2;

  public:
    Swap2(int val){
      this->num2 = val;
    }

    void display(){
      cout << "Number: " << this->num2 << endl;
    }

    friend void swapper(Swap1 &obj1,Swap2 &obj2);
};

void swapper(Swap1 &obj1,Swap2 &obj2){
  int temp = obj1.num1;
  obj1.num1 = obj2.num2;
  obj2.num2 = temp;
}

int main(){
  Swap1 s1(40);
  s1.display();

  Swap2 s2(50);
  s2.display();

  swapper(s1,s2);
  s1.display();
  s2.display();

  return 0;
}