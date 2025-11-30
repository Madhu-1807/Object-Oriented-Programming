#include<iostream>
using namespace std;
class A{
    public:
    void f(){
        cout<<"f from A class"<<endl;

    }
};
class B:public A{
    public:
    virtual void f(){
        cout<<"f from B class"<<endl;

    }
    virtual void g(){
        cout<<"g from B class"<<endl;

    }
};
int main(){
    B b;
    A a;
    B* bptr =&b;
    A* aptr=&a;
    //bptr = (B*)aptr;
    bptr->f();
    aptr->f();


    return 0;
}