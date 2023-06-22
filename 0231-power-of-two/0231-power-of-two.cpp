class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n < 0)
            return 0;
        if(n==0)
            return 0;
        n--;
        while(n>0){
            if(n%2==0)
                return 0 ;
            n/=2;
            
        }
        return 1;
        
    }
};