#include<iostream>
using namespace std;
class A{
  public:
  int *data;
  A(int a){
    data = new int (a);
  }

  A(const &A others){
    *data = new int *(others.data);
  }
  
  void get_details(){
    cout << "Address is " << data << endl;
  }

  ~A(){
    delete data;
  }

};

class B{
  public:
  int *data;
  B(int b){
    data = new int (b);
  }

  B(const &B others){
    data = new int(*others.data);
  }
  
  void get_details(){
    cout << "Address is " << data << endl;
  }

  ~A(){
    delete data;
  }

};

int main(){
  A a1(5);
  a1.get_details();
  A a2 = a1;
  a2.get_details();
  return 0;
}