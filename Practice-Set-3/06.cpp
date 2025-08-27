#include<iostream>
#include<string>

using namespace std;

class Car{
  private:
    string brand;
    string model;

  public:
    void setValues(string brand_val,string model_val){
      brand = brand_val;
      model = model_val;  
    }

    void getValues(){
      cout << "Brand: " << brand << "\nModel: " << model << endl;
    }
};

int main(){
  Car c1;
  c1.setValues("Benz", "GT-05");
  c1.getValues();


  return 0;

}