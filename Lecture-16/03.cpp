#include<iostream>
#include<queue>

using namespace std;

int main(){
  queue<int> q;
  q.push(34);
  q.push(55);
  q.pop();
  q.back();
  q.empty();

  return 0;
}