# include<iostream>
#include<string>

using namespace std;

class my_string{
  private:
    string sample;

  public:
    void set_string(string sample_val){
      this-> sample = sample_val;
    }

    void get_string(){
      cout << "String: " << this->sample << endl;
    }

    string capitalize(){
      
      for(int i = 0; i < sample.length(); i++){
        if(sample[i] >= 'a' && sample[i] <= 'z'){
          sample[i] = sample[i] - 32;
        }
      }
      return sample;
    }

    string to_lower(){
      
      for(int i = 0; i < sample.length(); i++){
        if(sample[i] >= 'A' && sample[i] <= 'Z'){
          sample[i] = sample[i] + 32;
        }
      }
      return sample;
    }
};

int main(){

  int val = char('A');
  cout << val << endl;
}

