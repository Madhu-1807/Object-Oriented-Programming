#include<iostream>
#include<string>

using namespace std;

namespace mythings{
  int uv;
  void greet(){
    cout << "Good Morning" << endl;
  }

  class simple{
    int a;
    public:
      simple (int n){
        this->a = n;
      }

      void get_value(){
        cout << "Value of a: " << a << endl;
      }
  };
};

int main(){
  mythings::uv = 10;
  cout << "Value of uv is " << mythings::uv << endl;
  mythings::greet();
  mythings::simple s(10);
  s.get_value();
  return 0;
}

