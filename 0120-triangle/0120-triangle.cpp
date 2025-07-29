class Solution {
public:
   int solve(int row, int col,int rows, vector<vector<int>>& triangle, vector < vector<int>>&memo) {
    if (row >= rows-1)return triangle[row][col];
    if (col<0 || col> row)return 1e9;
    if (memo[row][col] != -2)
        return memo[row][col];

    int mx = 1e9;
    mx = min(mx, triangle[row][col]  +  solve(row + 1, col , rows , triangle,memo));
    mx = min(mx, triangle[row][col]  +  solve(row + 1, col + 1,rows,triangle,memo));
   
    return memo[row][col] = mx;
}
int minimumTotal(vector<vector<int>>& triangle) {
    vector < vector<int>>memo(205,vector<int>(triangle.size(),-2));
    return solve(0, 0,triangle.size(),triangle,memo);
}
};