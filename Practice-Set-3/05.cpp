#include<iostream>
#include<string>

using namespace std;

class Employee{
  private:
    int id;
    float salary;

  public:
    void setValues(int id_val,float salary_val){
      id = id_val;
      salary = salary_val;  
    }

    void getValues(){
      cout << "Id: " << id << "\nSalary: " << salary << endl;
    }
};

int main(){
  Employee e1,e2,e5;
  e1.setValues(54,96.38);
  e2.setValues(89,582.36);
  e5.setValues(25,489.36);
  e1.getValues();
  e2.getValues();
  e5.getValues();

  return 0;

}