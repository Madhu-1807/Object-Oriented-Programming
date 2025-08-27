#include<iostream>
#include<string>

using namespace std;

class University{
  private:

    string name;
    int ranking;

  public:
    void set_values(string name_var, int rank_var){
      name = name_var;
      ranking = rank_var;
    }

    void get_values(){
      cout << "Name: " << name << "\nRanking: " << ranking << endl;
    }

};

int main(){
  University u1;
  u1.set_values("Sai University",121);
  u1.get_values();
  return 0;
}



