#include<iostream>
#include<string>

using namespace std;

class details{
    public:             
    int roll_no;
    float marks;
    string name;
};

int main(){
  details d1;
  d1.name = "Alex";
  d1.marks = 89;
  d1.roll_no = 23;
  cout<<" name : "<<d1.name<<" marks : "<<d1.marks<<" roll_no : "<<d1.roll_no<<endl;
  return 0;
}