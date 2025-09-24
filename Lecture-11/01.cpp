#include<iostream>
#include<string>

using namespace std;

class my_array{
  private:
    int n;
    int* arr;
    int i = 0;

    void detail_of_array(){
      cout << "Size of an array is " << n << endl;
    }

  public:
    my_array(int size){
      this->n = size;
      arr = new int[n];
    }

    void append(int val){
      arr[i] = val;
      i++;
    }

    void get_details(){
      detail_of_array();
      for(int j = 0;j < n; j++){
        cout << arr[j] << " ";
      }
    }

    void search(int val){
      for(int j = 0; j <  n; j++){
        if(arr[j] == val){
          cout << "Found" << endl;
        }
      }
    }

    void replace(int index, int val){
      arr[index] = val;
      cout << index << " is replaced to " << val << endl;
    }

    void insert(int index, int val){
      
    }

    ~my_array(){
      delete[] arr;
    }


};

int main(){

  my_array m1(5);
  m1.append(52);
  m1.append(78);
  m1.append(45);
  m1.append(21);
  m1.append(9);
  m1.get_details();
  cout << endl;

  m1.search(78);
  m1.search(4);

  m1.replace(4,10);
  m1.get_details();
  cout << endl;

  //m1.append(10); Code complies and runs but does not get added to the memory.
  

  return 0;

}