#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main(){
  vector<int> v1(5,9);
  for(int i: v1){
    cout << i << endl;
  }
  cout << "Size of the vector is " << v1.size() << endl; 

  auto it = v1.begin();
  cout << "Element is " << *it << endl;

  v1.insert(v1.begin(),45);
  v1.insert(v1.begin()+1,32);
  v1.insert(v1.end()-1,28);
  v1.insert(v1.end(),34);


  v1.erase(v1.begin()+3);

  v1.front();
  v1.pop_back();
  v1.push_back(23);
  auto it1 = v1.rbegin();

  for (int i:v1){
    cout << i << endl;
  }
  cout << "Size of the vector is " << v1.size() << endl; 

  for(int i:v1){
    cout << i << endl;
  }
  cout << "Size of the vector is " << v1.size() << endl; 

  sort(v1.begin(),v1.end());
  for(int i:v1){
    cout << i << endl;
  }
  cout << "Size of the vector is " << v1.size() << endl; 



  //Using the set library

  set<int> s;
  for(int i: v1){
    s.insert(i);
  }

  cout << "Set Elements " << endl;
  for(int j: s){
    cout << j << endl;
  }
  v1.assign(s.begin(),s.end());
  for(int j: s){
    cout << j << endl;
  }

  s.find(23);

  

  
  
  

  return 0;
}