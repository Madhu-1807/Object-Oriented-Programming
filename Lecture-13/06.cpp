#include<iostream>
#include<string>

using namespace std;

class university{
    //string name;
    //int id;
    public:
    // If we use "virtual" keyword, it gonna call a method where the pointer is pointing.
    virtual void display(){
        cout << "Welcome from base class" << endl;
    }
};

class student:public university{
    public:
    void display(){
        cout<<"Welcome from derived class"<<endl;

    }
};

int main(){
    university *o1;
    university ob;
    o1 =&ob;
    //o1->display();
    student *s1;
    student sb1;
    //s1= (student*)o1;
    o1 = (university*)s1;
    //s1->display();
    //o1->display();
    o1 = s1;
    o1->display();
    s1->display();

    /*ob.display();//static binding
    sb1.display(); // static binding
    o1->display(); //dynamic binding
    s1->display(); //dynamic binding */

    //dynamic binding works only with pointers
    return 0;
}