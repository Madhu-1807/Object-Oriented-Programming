#include<iostream>
#include<string>
using namespace std;

class details{
  private:
    int m1;
    int m2;
    int m3;
    int m4;
    int m5;
    void greet(){      // private method
      cout <<"Hello"<< endl;
    }
    
    string name;

  public: 
    void set_value(int n1, int n2, int n3, int n4, int n5,string nm){
      m1 = n1;
      m2 = n2;
      m3 = n3;
      m4 = n4;
      m5 = n5;
      name = nm;
    }

    void get_value(void){
      float avg = 0;
      avg = (m1+m2+m3+m4+m5)/5;
      cout << "Average marks of " << name << " is "<<avg<<endl;
      
    }

    void get_greet(){     //defined 
      greet();            // to acces the private member
    }
};


int main(){
  details s1;  
  s1.get_greet();   
  return 0;
}