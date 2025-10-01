/*Create a class Student with parameterized constructors to initialize
different sets of variables.*/

#include<iostream>
#include<string>

using namespace std;

class Student {
  private:
    string name;
    int id;
    float marks;

  public:
    Student(){
      this->name = "Null";
      this->id = 0;
      this->marks = 0.0;
    }

    Student(string name_val){
      this->name = name_val;
      this->id = 0;
      this->marks = 0.0;
    }

    Student(string name_val,int id_val){
      this->name = name_val;
      this->id = id_val;
      this->marks = 0.0;
    }

    Student(string name_val, int id_val, float marks_val){
      this->name = name_val;
      this->id = id_val;
      this->marks = marks_val;
    }

    void display(){
      cout << "Name: " << this->name << "\nId: " << this->id << "\nMarks: " << this->marks << endl;
      cout << "---------------" << endl;
    }
};

int main(){
  Student s1,s2("Madhu"),s3("Rajes",75),s4("Vels",5,100),s5;
  s1.display();
  s2.display();
  s3.display();
  s4.display();
  s5.display();

  return 0;

}

