class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;
        for(int i = 0 ; i < s.size();i++)
         mp[s[i]] = -5;
        int mx = 0,cur= 0,where = 0;
        for(int i = 0 ; i < s.size() ; i++){
           if(mp[s[i]] >= where){
             where = mp[s[i]] + 1; 
           }
           mp[s[i]] = i ;
           mx = max(mx, i - where + 1);
        }
        return mx;
    }
};