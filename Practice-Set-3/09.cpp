#include<iostream>
#include<string>

using namespace std;

class Temperature{
  private:
    float celsius;

  public:
    void setCelsius(float celsius_val){
      celsius = celsius_val;
    }

    void getFahrenheit(){
      float fahrenheit = (celsius * 9/5) + 32;
      cout << "Celsius: " << celsius << "\nFahrenheit: " << fahrenheit << endl;
    }

};

int main(){
  Temperature t1;
  t1.setCelsius(32);
  t1.getFahrenheit();
  return 0;
}



