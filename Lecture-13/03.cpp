#include<iostream>
using namespace std;

class A{
    public:
    int a;
};
class B{
    public:
    int b;
};

//casting of unrelated class wont work
int main(){
    A* oa;
    B* ob;
    //ob=oa; //pointers do not support implicit casting 
    oa = (A*)ob; 
    oa ->a = 4;
    cout<<"value of a is "<<oa->a<<endl;
    return 0;
}