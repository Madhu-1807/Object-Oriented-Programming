#include<iostream>
#include<string>

using namespace std;

class Book{
  private:
    string title;
    float price;

  public:
    void setValues(string title_var, float price_var){
      title = title_var;
      price = price_var;
    }

    void getValues(){
      cout << "Title: " << title << "\nPrice: " << price << endl;
    }
};

int main(){
  Book b1;
  b1.setValues("Scent of Happiness", 499);
  b1.getValues();

  return 0;

}