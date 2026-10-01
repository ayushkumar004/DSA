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
}  //here we have used hashmap to count frequency of each element then printed that
//Input
n=8
arr=[2,3,2,5,3,2,8,5]
output:
2->3
3->2
5->2
8->1
