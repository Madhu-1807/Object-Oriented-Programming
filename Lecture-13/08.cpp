#include<iostream>
#include<string>

using namespace std;

class Base{
  public:
    virtual void print(){
      cout << "Base Class" << endl;
    }

    void get_derived(){
      cout << "This is a call from base class " << endl;
    }
};

class Derived : public Base{
  public:
    void print(){
      cout << "Derived Class" << endl;
    }

    void get_derived(){
      cout << "This is a call from derived class " << endl;
    }
};

class Derived2 : public Derived{
  public:

    void get_derived(){
      cout << "This is a call from derived2 class " << endl;
    }
};

int main(){
  Base b;
  Base *bptr;
  bptr = &b;
  Derived d;
  Derived *dptr;
  dptr = &d;
  Derived2 d2;
  Derived2 * d2ptr;
  d2ptr = &d2;
  bptr = (Base *)dptr;
  dptr = (Derived *)d2ptr;
  bptr->get_derived();
  dptr->get_derived();
  d2ptr->get_derived();
  return 0;

}
