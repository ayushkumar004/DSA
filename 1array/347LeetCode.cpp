//347. Top K Frequent Elements
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mq;
        for(auto num: nums){
            mq[num]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto x:mq){
            pq.push({x.second,x.first});
        }
        vector<int>ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
