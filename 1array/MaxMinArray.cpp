//largest and smallest element in an array
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int>arr={5,2,9,1,7};
  int largest=arr[0];
  int smallest=arr[0];
  for(int i=1;i<arr.size();i++){
    if(arr[i]>largest){
      largest=arr[i];
    }
    if(arr[i]<smallest){
      smallest=arr[i];
    }
  }
  cout<<"largest element is: "<< largest<<endl;
  cout<<"Smallest element is: "<< smallest<<endl;
}

//here it finds largest and smallest element in a array
