#include<bits/stdc++.h>
class Solution {
public:
    string convert(string s, int numRows) {
        int start = (numRows-1) + (numRows-2);
        string result = "";
        int below = start;
        int above = 0;
        if(numRows==1)
            return s;
        for(int i = 0 ;i < min((int)s.size(),numRows) ;i++){
            int cur_pointer = i;
            result+=s[cur_pointer];
            while(1){    
                if(below!=0){
                    cur_pointer+= below+1;
                if(cur_pointer >= s.size())
                    break;
                result+=s[cur_pointer];
                } 
                if(above!=0){
                    cur_pointer+= above+1;
                if(cur_pointer >= s.size())
                    break;
                result+=s[cur_pointer];
                }
                
            }
            if(above==0)
                above++;
            else above+=2;
            if(below==1)
                below--;
            else below-=2;
        }
        return result;
    }
};

// case of 2_rows
// p d
// a c

 // in case of numRows = 5

// 1 => below->7 up->0
// 2 => below->5 up->1
// 3 => below->3 up->3
// 4 => below->1 up->5
// 5 => below->0 up->7

    
 // in case of numRows = 4

// 1 => below->5 up->0
// 2 => below->3 up->1
// 3 => below->1 up->3
// 4 => below->0 up->5


// incase numRows = 3

// 1 => below->3 up->0
// 2 => below->1 up->1
// 3 => below->0 up->3

// CASE 5 ROWS

// P    I    N
// A   LS   IS
// Y  A H  R N 
// P M  R G  M
// X    S    R

// strat  = (n-1) + (n-2)
// n=1 corner Case