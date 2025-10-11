#include<iostream>
using namespace std;
class University
{
    private:
      int id;
      string name;
    public:
      University(int id, string name){
          this->id=id;
          this->name=name;
      }
      void get_details(){
          cout << "Id: " << id << "\nName: " << name << endl;
      }
};
class Students: public University
{
    private:
      int roll_no;
      string school;
    public:
      Students(int roll_no, string school, string nm, int id):University(id,nm)
      {
          this->roll_no=roll_no;
          this->school=school;
      }
      void get_student_details()
      {
          cout<<"Roll No: "<< roll_no << "\nSchool: " << school <<endl;
      }
};
class class_representative: public Students
{
    private: 
      int task;
      string course;
    public:
      class_representative(int task, string course, int roll_no, string school, int id, string name):Students(roll_no,school,name,id){
          this->task = task;
          this->course = course;
      }

      void get_cr(){
        cout << "Task: " << task << "\nCourse: " << course << endl;
      }
};

/* class President : public class_representative{
  private:
    bool is_president;

  public:
    
}; */

int main()
{
  class_representative r1(1,"OOP",127,"CDS",45,"A");
  r1.get_details();
  r1.get_student_details();
  r1.get_cr();

    return 0;
}