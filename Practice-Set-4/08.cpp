/*Define a class Car with members brand, model, and price. 
Overload constructors to:
• Initialize brand only.
• Initialize brand and model.
• Initialize brand, model, and price.*/

#include<iostream>
#include<string>

using namespace std;

class Car{
  private:
    string brand;
    string model;
    float price;

  public:

    Car(string b){
      this->brand = b;
      this->model = "Unknown";
      this->price = 0.0;
    }

    Car(string b,string m){
      this->brand = b;
      this->model = m;
      this->price = 0.0;
    }

    Car(string b,string m,float p){
      this->brand = b;
      this->model = m;
      this->price = p;
    }

    void get_details(void){
      cout << "Brand: " << this->brand << "\nModel: " << this->model << "\nPrice: " << this->price << endl; 
      cout << "----------------"  << endl;
    }

};



int main(){
  
  Car c1("Audi");
  Car c2("BMW","AU7812D");
  Car c3("Benz", "PF984F", 49999);

  c1.get_details();
  c2.get_details();
  c3.get_details();
  return 0;
}