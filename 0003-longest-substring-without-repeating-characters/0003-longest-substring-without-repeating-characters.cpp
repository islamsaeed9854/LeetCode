class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,bool>mp;
        int l = 0 , ans = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(mp[s[i]]){
                while(true){
                   mp[s[l]]= false;
                   if(s[l++] == s[i]){
                     break;
                   }
                }
            }
            mp[s[i]] = true; 
            ans = max(ans, i - l + 1);
        }
        return ans;
    }
};