/*Implement a friend function that allows two classes to share a common
function to add private variables.*/

#include<iostream>
#include<string>

using namespace std;

class MyClass2;

class MyClass1{
  int x1;

  public:
    MyClass1(int val){
      this->x1 = val;
    }

    friend void add_numbers(MyClass1 obj1, MyClass2 obj2);
};

class MyClass2{
  int x2;

  public:
    MyClass2(int val){
      this->x2 = val;
    }

    friend void add_numbers(MyClass1 obj1, MyClass2 obj2);
};

void add_numbers(MyClass1 obj1, MyClass2 obj2){
  int result = obj1.x1 + obj2.x2;
  cout << "The addition of integers in both classes is " << result << endl;
}

int main(){
  MyClass1 obj1(15);
  MyClass2 obj2(20);

  add_numbers(obj1,obj2);
  return 0;
}