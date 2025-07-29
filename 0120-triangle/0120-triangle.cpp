class Solution {
public:
   int solve(int row, int col,int rows, vector<vector<int>>& triangle, vector < vector<int>>&memo) {
    if (row >= rows-1)return triangle[row][col];
    if (memo[row][col] != 1e9)
        return memo[row][col];

    
    int m1 =  triangle[row][col]  +  solve(row + 1, col , rows , triangle,memo);
    int m2 =  triangle[row][col]  +  solve(row + 1, col + 1,rows,triangle,memo);
   
    return memo[row][col] = min(m1,m2);
}
int minimumTotal(vector<vector<int>>& triangle) {
    vector < vector<int>>memo(205,vector<int>(205, 1e9 ));
    return solve(0, 0,triangle.size(),triangle,memo);
}
};