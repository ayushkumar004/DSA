217. Contains Duplicate
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
Example 1:
Input: nums = [1,2,3,1]
Output: true
Explanation:
The element 1 occurs at the indices 0 and 3.
Example 2:
Input: nums = [1,2,3,4]
Output: false
Explanation:
All elements are distinct.
Example 3:
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool istrue=false;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j])istrue=true;
            }
        }
        return istrue;
    }
};//this code is correct but it shows Time limit exceeded



class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp1;
        for(int i=0;i<nums.size();i++){
            if(mp1.find(nums[i])!=mp1.end()) return true;
            mp1[nums[i]]++;
        }
        return false;
    }
};//this is using hashmap and its optimized approach
