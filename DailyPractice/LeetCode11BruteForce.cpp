//container with most water
//this approch is correct but its brute force and its slow so it is showing TLE in Leetcode 
//so do with optimised one but this is correct

class Solution {
public:
    int maxArea(vector<int>& height) {
    
        int n=height.size()-1;
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=n;j>i;j--){
                int mini=min(height[i],height[j]);
                int b=j-i;
                int area=mini*b;
                maxi=max(maxi,area);
            }
        }
        return maxi;
    }
};
//here we are calculating area at each step and comparing with maxArea and then returning maxArea
