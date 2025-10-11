/*
1.class vector takes 2 elements
2.class Matix of 2x2 matrix
3.class matrix vector to multiple 
4. USe multiple inheritance.
5.         A
6.      /     \      
7.     B       C         
*/

#include<iostream>
#include<string>

using namespace std;

class Vector{
  int arr[2];

  public:
    Vector(int a, int b){
      this->arr[0] = a;
      this->arr[1] = b;
    }

    void get_vector(){
      cout << "[" << arr[0] << "  " << arr[1] << "]" << endl;
    }
};

class Matrix{
  int arr[2][2];

  public:
    Matrix(int a1, int a2, int b1, int b2){
      this->arr[0][0] = a1;
      this->arr[0][1] = a2;
      this->arr[1][0] = b1;
      this->arr[1][1] = b2;
    }
};
