class Solution {
public:
    int dp[111][111];
    int rows ,cols ;
    int solve(int x,int y){
        if(x>=rows || y>= cols)
            return 0;
        if(x==rows-1 && y== cols-1)
            return 1;
        if(dp[x][y]!=-1)
            return dp[x][y];
        return dp[x][y] = solve(x+1,y) + solve(x,y+1);
        
    }
    int uniquePaths(int m, int n) {
    rows = m;
        cols = n;
        memset(dp,-1,sizeof dp);
        return solve(0,0);
    }
};