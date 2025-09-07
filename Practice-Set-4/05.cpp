/*Write a C++ program with a class Time having data members hours,
minutes, seconds. Overload constructors to:
• Initialize all with zero.
• Initialize hours and minutes, seconds defaulted to zero.
• Initialize all three.*/

#include<iostream>
#include<string>

using namespace std;

class Time{
  private:
    int hours;
    int minutes;
    int seconds;

  public:

    Time(){
      this->hours = 0;
      this->minutes = 0;
      this->seconds = 0;
    }

    Time(int h,int m){
      this->hours = h;
      this->minutes = m;
      this->seconds = 0;
    }

    Time(int h, int m, int s){
      this->hours = h;
      this->minutes = m;
      this->seconds = s;
    }

    void get_details(void){
      cout << "Hours: " << this->hours << "\nMinutes: " << this->minutes << "\nSeconds: " << this->seconds << endl; 
      cout << "----------------"  << endl;
    }

};



int main(){
  
  Time t1;
  Time t2(12,27);
  Time t3(12,27,30);

  t1.get_details();
  t2.get_details();
  t3.get_details();
  return 0;
}