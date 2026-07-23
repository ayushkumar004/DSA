//442. Find All Duplicates in an Array
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mq;
        for(auto num:nums){
            mq[num]++;
        }
        vector<int>ans;
        for(auto x:mq){
            if(x.second==2){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};

//using hashmap
