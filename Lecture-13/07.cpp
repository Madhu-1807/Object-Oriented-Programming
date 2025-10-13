#include<iostream>
#include<string>

using namespace std;

class Base{
  public:
    virtual void print(){
      cout << "Base Class" << endl;
    }
};

class Derived : public Base{
  public:
    void print(){
      cout << "Derived Class" << endl;
    }

};



int main(){
  Base b;
  Base *bptr;
  bptr = &b;
  Derived d;
  Derived *dptr;
  dptr = &d;
  b.print(); //base::print
  d.print(); //derived::print  //static binding
  bptr->print();  //base::print
  dptr->print(); //derived::print
  //bptr = (Base *)dptr;
  // Doesn't display "derived Class" unless it is called from virtual
  bptr->print();
  dptr = (Derived *) bptr; // Explicit casting is necessary
  dptr->print();
}

