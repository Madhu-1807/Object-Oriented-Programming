#include<iostream>
#include<string>

using namespace std;

class Student{
  private:

    string name;
    int age;

  public:
    void set_values(string name_var, int age_var){
      name = name_var;
      age = age_var;
    }

    void get_values(){
      cout << "Name: " << name << "\nAge: " << age << endl;
    }

};

int main(){
  Student s1;
  s1.set_values("Madhu",18);
  s1.get_values();
  return 0;
}



