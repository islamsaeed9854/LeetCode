class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
	int num_of_rows = matrix.size();
	int num_of_cols = matrix[0].size();
	int st = 0, end = num_of_rows-1;
	int row_num_target = 0;
	while (st <= end) {
		int mid = (st + end) / 2;
		if (matrix[mid][0] <= target) {
			st = mid + 1;
			row_num_target = mid;
		}
		else {
			end = mid - 1;
		}
	}
	st = 0, end = num_of_cols-1;
	while (st <= end) {
		int mid = (st + end) / 2;
		if (matrix[row_num_target][mid] > target) {
			end = mid - 1;
		}
		else if (matrix[row_num_target][mid] < target) {
			st = mid + 1;
		}
		else return true;
	}
	return false;
}
};




