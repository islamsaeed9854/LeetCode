class Solution {
public:
    string longestPalindrome(string s) {
        int mx = 1 , l_ans = 0,r_ans = 0,cur_ans =0;
        for(int i = 0 ; i < s.size(); i++){
            int l = i , r = i;
            while(l - 1 >= 0 && r + 1 < s.size() && s[l-1] == s[r+1]){
                  l--, r++;
            }
            if(r - l  + 1  > mx ){
                mx  = r - l + 1;
                l_ans =  l , r_ans = r;
            } 
            l = i, r = i + 1,cur_ans = 0;
             while(l >= 0 && r < s.size() && s[l] == s[r]){
                  l--, r++;
                  cur_ans+=2;
            }
            l++,r--;
            if(cur_ans > mx ){
                mx  = r - l + 1;
                l_ans =  l , r_ans = r;
            } 
        }
        return s.substr(l_ans , r_ans - l_ans +1 );
    }
   
};