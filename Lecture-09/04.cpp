#include<iostream>
using namespace std;
class Anything{
  private:
    void greetIn(){
      cout << "Hello from private " << endl;
    }
  public:
    void greetOut(){
      cout << "Hello from public" << endl;
    }
};

int main(){
  Anything a1;
  a1.greetOut();
  //a1.greetIn;  Error occurs
  
  return 0;
}