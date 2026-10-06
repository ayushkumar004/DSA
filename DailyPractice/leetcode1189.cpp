/*1189. Maximum Number of Balloons
Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible.
You can use each character in text at most once. Return the maximum number of instances that can be formed.
Example 1:
Input: text = "nlaebolko"
Output: 1
  
Example 2:
Input: text = "loonbalxballpoon"
Output: 2
  
Example 3:
Input: text = "leetcode"
Output: 0*/

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<int,int>mp1;
        string x="balloon";
        for(int i=0;i<x.length();i++){
            mp1[x[i]]++;
        }
        unordered_map<int,int>mp2;
        for(int i=0;i<text.size();i++){
            mp2[text[i]]++;
        }
        int mini=INT_MAX;
        for(auto i:x){
            mini=min(mini,mp2[i]/mp1[i]);
        }
        return mini;
    }
};
 
