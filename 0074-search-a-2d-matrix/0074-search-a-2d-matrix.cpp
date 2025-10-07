class Solution {
public:
    int get_index(int row, int col,int num_of_cols) {
	return row * num_of_cols + col;
}
bool searchMatrix(vector<vector<int>>& matrix, int target) {
	int num_of_rows = matrix.size();
	int num_of_cols = matrix[0].size();
	int size = num_of_cols * num_of_rows - 1;
	int st = 0, end = size;
	while (st <= end) {
		int mid = (st + end) / 2;
		int cur_row = mid / num_of_cols;
		int cur_col = mid % num_of_cols;
		if (matrix[cur_row][cur_col] > target) {
			end = get_index(cur_row, cur_col, num_of_cols) - 1;
		}
		else if (matrix[cur_row][cur_col] < target) {
		    st = get_index(cur_row, cur_col, num_of_cols) + 1;
		}
		else { return true; }
	}
	return false;
}
};




