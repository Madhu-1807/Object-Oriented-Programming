/* Multiple Inheritance */

#include<iostream>
#include<string>

using namespace std;

class Student{
  private:
    int roll_no;
    string name;
  public:
    Student(int roll_no, string name){
      this->roll_no = roll_no;
      this->name = name;
    }

    void get_student(){
      cout << "Roll : " << roll_no << "\nName: " << name << endl;
    }
};

class math_course{
  private:
    string course;
    int assingment;
  public:
    math_course(string course, int assignment){
      this->course = course;
      this->assingment = assignment;
    }

    void get_math(){
      cout << "Course: " << course << "\nAssignment: " << assingment << endl;
    }

};

class registry: public Student, public math_course{
  bool k;
  public:
    registry(bool k, string course, int assignment , string name, int roll_no):math_course(course, assignment), Student(roll_no, name){
      if(k == true){
        cout << "Verified" << endl;
      }else{
        cout << "Not Verified" << endl;
      }
    }
    
};

int main(){
  registry r1(false,"OOPS",5,"Santha",45);
  registry r2(true,"OOPS",5,"Santha",45);

  return 0;
}