#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int>arr={10,20,5,30,25};
  int max=INT_MIN;
  int secMax=INT_MIN;
  for(auto x:arr){
    if(x>max){
      secMax=max;
      max=x;
    }
    else if(x>secMax && x!=max){
      secMax=x;
    }
  }
  cout<<secMax;
}

//here we are finding second largest element in a array
