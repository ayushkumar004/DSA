//given an array find the first element whose frequency is exactly one  and the order should be according to original array 
//unordered map when printed can change its order so we have to take care if question says we want in original order as array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(freq[arr[i]]==1){
            cout<<arr[i];
            break;
        }
    }
    return 0;
}
