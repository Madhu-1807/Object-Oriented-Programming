/*Design a class Book with attributes title, author, and price. Provide
constructor overloading to allow creating:
• Book with title only.
• Book with title and author.
• Book with title, author, and price.*/

#include<iostream>
#include<string>

using namespace std;

class Book{
  private:
    string title;
    string author;
    float price;

  public:

    Book(string t){
      this->title = t;
      this->author = "Unknown";
      this->price = 0.0;
    }

    Book(string t,string a){
      this->title = t;
      this->author = a;
      this->price = 0.0;
    }

    Book(string t,string a,float p){
      this->title = t;
      this->author = a;
      this->price = p;
    }

    void get_details(void){
      cout << "Title: " << this->title << "\nAuthor: " << this->author << "\nPrice: " << this->price << endl; 
      cout << "----------------"  << endl;
    }

};



int main(){
  
  Book b1("fun home");
  Book b2("fun Home","charles");
  Book b3("fun home","Charles",45.99);

  b1.get_details();
  b2.get_details();
  b3.get_details();
  return 0;
}