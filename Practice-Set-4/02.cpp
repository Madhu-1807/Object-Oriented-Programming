/*2.Write a program to create a class Student with data members name,
age, and marks. Implement both a default constructor and a parame-
terized constructor to initialize the data.*/

#include<iostream>
#include<string>

using namespace std;

class Student{
  private:
    string name;
    int age;
    float marks;

  public:
    Student(string name_val,int age_val,float marks_val){
      this->name = name_val;
      this->age = age_val;
      this->marks = marks_val;
    }

    Student(){
      this->name ="Null";
      this->age = 0;
      this->marks = 0.0;
    }

    void getDetails(void){
      cout << "Name: " << this->name << "\nAge: " << this->age << "\nMarks: " << this->marks << endl;
      cout << "--------------------"  << endl;
    }
};

int main(){
  Student s1;
  Student s2("Madhu",20,100);
  s1.getDetails();
  s2.getDetails();
}

