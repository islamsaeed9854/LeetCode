class Solution {
public:
    int reverseBits(int n) {
        string bin_num ="";
        while(n){
            if(n%2)
              bin_num.push_back('1');
              else bin_num.push_back('0');
            n/=2;
        }
        while(bin_num.size()<32)
        bin_num.push_back('0');
        int ans =0,current_bit=0;
        for(int i = bin_num.size()-1; i>=0;i--){
            if(bin_num[i]=='1')
          ans |= (1<<current_bit);
          current_bit++;
        }
        return ans;
    }
};