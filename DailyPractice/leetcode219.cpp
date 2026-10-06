219. Contains Duplicate II
Solved
Easy
Topics
premium lock icon
Companies
Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
Example 1:
Input: nums = [1,2,3,1], k = 3
Output: true
Example 2:
Input: nums = [1,0,1,1], k = 1
Output: true
Example 3:
Input: nums = [1,2,3,1,2,3], k = 2
Output: false

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp1;
        for(int i=0;i<nums.size();i++){
            if(mp1.find(nums[i])!=mp1.end()){
                if(abs(i-mp1[nums[i]])<=k)return true;
            }
            mp1[nums[i]]=i;
        }
        return false;
    }
};
