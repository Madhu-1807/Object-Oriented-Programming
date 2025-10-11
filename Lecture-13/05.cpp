#include<iostream>
using namespace std;

class base{
    public:
    void fun1(){
        cout<<"fun1 from base class"<<endl;
    }
};

class derived: public base{
    public:
    using base:: fun1;
    void fun1(){ // this method overrides base class method ie, fun
      cout<<"fun1 from derived class"<<endl;
    }
    void fun1(int a){
      cout<<"Value of a is "<<a<<endl;

    }
    
     

};

int main(){
    base b;
    derived d;
    b.fun1();
    d.fun1();
    //d.fun1(5);
    d.base::fun1(); 
    return 0;
}