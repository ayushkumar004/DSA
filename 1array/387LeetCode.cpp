//387. First Unique Character in a String
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mq;
        for(auto str:s){
            mq[str]++;
        }
        for(int i=0;i<s.size();i++){
            if(mq[s[i]]==1)return i;
        }
        return -1;
    }
};
//using hashmap
