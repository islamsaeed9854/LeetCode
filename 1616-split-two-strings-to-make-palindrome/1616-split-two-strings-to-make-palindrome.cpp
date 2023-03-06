class Solution {
public:
    bool is_palindrome(string s){
        string tmp = s;
        reverse(s.begin(),s.end());
        return (s == tmp);
    }
    bool check(string a,string b){
        bool above = true;
        int p1 = 0 , p2 = a.size()-1;
        bool ans = 1;
        bool mid_above= true;
        bool mid_down = true;
        while(p1<p2){
            bool f = false;
            if(above){
                if(a[p1] == b[p2]){
                    f = true;
                }
                else above = false;
            }
            if(above==false && mid_down){
                if(b[p2] == b[a.size()-p2-1])
                   f= true;
                else{
                    mid_down = false;
                }
            }
            if(above==false && mid_above){
                if(a[p2] == a[a.size()-p2-1])
                   f= true;
                else{
                    mid_above = false;
                }
            }
            
            if(f==false)
                {
                ans=0;
                break;
            }
            p1++;
            p2--;
        }
        return ans;
    }
    bool checkPalindromeFormation(string a, string b) {
        if(is_palindrome(a) || is_palindrome(b))
            return true;
        
        return (check(a,b)||check(b,a));
    }
};