/*Write a program to create a class Employee with data members name,
id, and salary. Implement:
• A constructor that initializes name and id only.
• A constructor that initializes all three values.*/

#include<iostream>
#include<string>

using namespace std;

class Employee{
  private:
    string name;
    int id;
    float salary;

  public:

    Employee(string n,int i){
      this->name = n;
      this->id = i;
    }

    Employee(string n,int i,float s){
      this->name = n;
      this->id = i;
      this->salary = s;
    }

    void get_details(void){
      cout << "Name: " << this->name << "\nId: " << this->id << "\nSalary: " << this->salary << endl;
      cout << "-------------------" << endl;
    }
};

int main(){
  Employee e1("Madhu",7894);
  Employee e2("Rajes",2341,75000);

  e1.get_details();
  e2.get_details();

}