#include <iostream>
using namespace std;

class University{
  private:
    int id;
    string name;
  public:
    University(int id, string name){
      this->id = id;
      this->name = name;
    }

    void get_details(){
      cout << "Name: " << name << "\nId: " << id << endl;
    }
};

class Students{
  private:
    int Id;
    int course_code;
    string name;
    string school;

  public:
    Students(int Id, int course_code, string name, string school){
      this->course_code = course_code;
      this->Id = Id;
      this->name = name;
      this->school = school;
    }

    void get_details2(){
      cout << "Name: " << name << "\nId: " << Id << "\nSchool: " << school << "\nCourse_code: " << course_code << endl;
    }
};

int main(){

  
  return 0;
}