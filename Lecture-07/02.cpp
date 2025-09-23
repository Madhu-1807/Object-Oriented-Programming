#include<iostream>
using namespace std;

int main(){
    // int * arr = (int*)malloc(sizeof(int)*5);
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int * arr = new int[n];// dynamically allocated
    arr[0]= 5; 
    arr[1] = 4;
    arr[2] = 3;
    cout<<" "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    // free(arr);
    delete[] arr; // clearing memory
    return 0;
}