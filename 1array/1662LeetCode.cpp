//1662. Check If Two String Arrays are Equivalent
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string arr1="";
        string arr2="";
        for(int i=0;i<word1.size();i++){
            arr1+=word1[i];
        }
        for(int i=0;i<word2.size();i++){
            arr2+=word2[i];
        }
        if(arr1==arr2)return true;
        else return false;
    }
};