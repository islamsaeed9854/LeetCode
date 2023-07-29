class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        for(int i = 0 ; i < n ; i++ )
        {
            for(int j = 0; j< n; j++){
                if(i > j)
                    continue;
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
        
        for(int i = 0 ;i < n; i++){
            int steps = n/2 ;
            int left_p = 0 , right_p = n-1;
            for(int j = 0 ; j < steps ; j++){
                swap(matrix[i][left_p],matrix[i][right_p]);
                left_p++,right_p--;
            }
        }
    }
};