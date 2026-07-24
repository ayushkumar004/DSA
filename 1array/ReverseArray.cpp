#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int>arr={10,20,30,40,50};
  int left=0;
  int right=arr.size()-1;
  while(left<=right){
    swap(arr[left],arr[right]);
    left++;
    right--;
  }
  for(auto x:arr){
    cout<< x <<" ";
  }
}

//we are reversing the whole array like 1,2,3,4,5 will look like  5,4,3,2,1
