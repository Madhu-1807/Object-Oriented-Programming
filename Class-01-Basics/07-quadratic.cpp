#include<iostream>
#include<cmath>

using namespace std;


int main(){
  float a,b,c, delta;
  float root1, root2;
  cout<<"Enter the coefficient of x^2: "<<endl;
  cin>>a;
  cout<<"Enter the coefficient of x: "<<endl;
  cin>>b;
  cout<<"Enter the constant: "<<endl;
  cin>>c;

  delta = (b*b) - 4*a*c;

  if(delta>0){
    root1 = (-b + sqrt(delta))/(2*a);
    root2 = (-b + sqrt(delta))/(2*a);
    cout << "The roots "<<root1<< "and "<<root2<< "are real and distinct"<<endl;
  }else if(delta<0){
    delta = -delta;
    cout << "The roots are imaginary."<<-b/(2*a)<< "+- "<<sqrt(delta)/(2*a)<< "i"<<endl;

  }else{
    root2 = (-b + sqrt(delta))/(2*a);
    cout << "The roots "<<root2<< " is real and equal"<<endl;
  }

}

