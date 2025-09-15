//Inheritance : Common features shared from the parent class to child class. 
//Has the members of both parent class and its own class

#include <iostream>
#include <string>

using namespace std;

class University{
  private:
    string name;
    int id;
  public:
    University(string name,int id){
      this->id = id;
      this->name = name;
      cout << "A new member has been created " << name << "_" << id << endl;
    }

    void get_details(){
      cout << "Name:" << this->name << "\nId: " << this->id;
    }
};


class Student : public University{
  private:
    string school;
  public:
    Student(string name, int id, string school) : University(name,id){
      this->school = school;
    }

    void getStudentDetails(){
      get_details();
      cout << "\nSchool: " << school << endl; 
    }

};

int main(){
  University u1("Madhu",97);
  u1.get_details();
  Student s1("Madhu",97,"SaiU");
  s1.getStudentDetails();

  return 0;

}