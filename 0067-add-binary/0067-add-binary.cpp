class Solution {
public:
   
    string addBinary(string a, string b) {
        if(a.size()>b.size())
        swap(a,b);  // b is always greater
        int diff_size = b.size()-a.size();
        string new_a = "";
        for(int i = 0; i< diff_size ;i++)
        new_a.push_back('0');
        new_a  += a;
        string ans = "";
        bool load_one = 0;
        for(int i = b.size()-1 ; i >= 0; i--){
            if(new_a[i]=='0' && b[i]=='0')
             {
                if(load_one)
                ans.push_back('1');
                else 
                  ans.push_back('0');
                load_one = 0 ;    
             }
             else if((new_a[i]=='1'&& b[i]=='0') || (new_a[i]=='0'&&b[i]=='1') )
             {
                 if(load_one){
                       ans.push_back('0');
                 }
                else 
                  ans.push_back('1');
                   
             }
             else {
                if(load_one)
                  ans.push_back('1');
                  else ans.push_back('0');
    load_one = 1;
             }
        }
        if(load_one )
        ans.push_back('1');
        reverse(ans.begin(),ans.end());
        return ans;
    }
};