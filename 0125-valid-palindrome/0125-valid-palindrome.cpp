class Solution {
public:
    bool isPalindrome(string s) {
        string tmp = s;
        s="";
        for(auto i :tmp)
        {
            if(i >= '0' && i<= '9')
                s+=i;
            else {
                 char ch = tolower(i);
            if(ch >= 'a' && ch <= 'z')
                s+=ch;
            }
           
        }
        string s2 = s;
        reverse(s.begin(),s.end());
        return s2 == s;
    }
};