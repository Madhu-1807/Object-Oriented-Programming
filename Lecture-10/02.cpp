#include <iostream>
using namespace std;

class University{
  public:
    int Id;
    string name;
  public:
    University(int Id, string name){
      this->Id = Id;
      this->name = name;
    }

    void get_details(){
      cout << "Name: " << name << "\nId: " << Id << endl;
    }
};

class Students:public University{
  private:
    int course_code;
    string school;

  public:
    Students(int Id, int course_code, string name, string school): University(Id,name){
      this->course_code = course_code;
      this->school = school;
    }

    void get_details2(){
      cout << "Name: " << name << "\nId: " << Id << "\nSchool: " << school << "\nCourse_code: " << course_code << endl;
    }
};

int main(){

  Students s1(123,02,"Madhu","SCDS");
  s1.get_details();
  s1.get_details2();

  
  return 0;
}