class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)
        return 1;
         if(n<=0)
        return 0;
        double x= n;
        while(x>=4)x/=4;
        return x==1;
    }
};