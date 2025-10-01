/*Implement a friend function to compare two objects of a class based
on private data.*/

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

    friend void compare_numbers(MyClass1 &obj1, MyClass2 &obj2);
};

class MyClass2{
  int x2;

  public:
    MyClass2(int val){
      this->x2 = val;
    }

    friend void compare_numbers(MyClass1 &obj1, MyClass2 &obj2);
};

void compare_numbers(MyClass1 &obj1, MyClass2 &obj2){
  if(obj1.x1 == obj2.x2){
    cout << "The integers are the same" << endl;
  }else{
    cout << "The integers aren't same" << endl;
  }
  
}

int main(){
  MyClass1 obj1(15);
  MyClass2 obj2(15);

  compare_numbers(obj1,obj2);
  return 0;
}