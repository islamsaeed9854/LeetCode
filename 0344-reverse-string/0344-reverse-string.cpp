class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0 ;
        while(st < s.size()-st-1){
            swap(s[st],s[s.size()-st-1]);
            st++;
        }
    }
};