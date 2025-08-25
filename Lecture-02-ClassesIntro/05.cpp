#include<iostream>
#include<string>
using namespace std;
class details{
  private:
    string name;
    string city; 
    string state; 
    float marks;
    

  public: 
    void set_value(){
      string nm,cty,ste;
      float mark;
      cout<<"Enter your name, city, state: ";
      cin>>nm>>cty>>ste;
      cout<<"\nEnter mark: ";
      cin>>mark;

      name = nm;
      city = cty;
      state = ste;
      marks = mark;
    }

    void get_value(void){

      cout << "name: " << name << "\nmarks: " << marks <<"\ncity: " << city << "\nstate: " << state << endl;
    }


};


int main(){
  details s1;
  s1.set_value();
  s1.get_value();

  
}