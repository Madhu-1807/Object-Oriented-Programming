/*Create a class Distance with data members feet and inches. Imple-
ment constructors for:

• Default initialization.
• Initialization using feet only.
• Initialization using feet and inches.*/

#include<iostream>
#include<string>

using namespace std;

class Distance{
  private:
    float feet;
    float inches;

  public:

    Distance(){
      this->feet = 0;
      this->inches = 0;
    }

    Distance(float f){
      this->feet = f;
      this->inches = 0;
    }


    Distance(float f,float i){
      this->feet = f;
      this->inches = i;
    }


    void get_details(void){
      cout << "Feet: " << this->feet << "\nInches: " << this->inches << endl; 
      cout << "----------------"  << endl;
    }

};



int main(){

  Distance d1;
  Distance d2(23);
  Distance d3(23,7);

  d1.get_details();
  d2.get_details();
  d3.get_details();
  return 0;
}