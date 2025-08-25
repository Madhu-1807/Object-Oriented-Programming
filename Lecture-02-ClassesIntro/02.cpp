#include<iostream>
#include<string>
using namespace std;
class details{
  private:
    int roll_no;
    float marks;
    string name;

  public: 
    void set_value(int rn,float mr,string nm){
      roll_no = rn;
      marks = mr;
      name = nm;
    }

    void get_value(void){
      cout << "name: " << name << " marks: " << marks <<" rollno: " << roll_no << endl;
    }



};


int main(){
  details s1;
  s1.set_value(15,98.5,"sai");
  s1.get_value();
  return 0;
}