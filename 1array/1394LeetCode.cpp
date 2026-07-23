//Find Lucky Integer in an Array
class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mq;
        for(auto num: arr){
            mq[num]++;
        }
        int ans=-1;
        for(auto x:mq){
            if(x.first==x.second){
                ans=max(ans,x.first);
            }
            
        }
        return ans;
    }
};
