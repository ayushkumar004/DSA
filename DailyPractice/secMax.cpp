#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    int secMax=max;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secMax=max;
            max=arr[i];
            
        }
        else if(arr[i]!=max && arr[i]>secMax){
            secMax=arr[i];
        }
    }
    cout<<secMax;
}   //find second maximum in an array
