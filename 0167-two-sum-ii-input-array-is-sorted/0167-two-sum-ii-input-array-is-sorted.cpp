class Solution {
public:
    int do_BS(vector<int>& numbers, int st, int end,int diff) {
	while (st <= end) {
		int mid = (st + end) / 2;
		if (numbers[mid] > diff)
			end = mid - 1;
		else if (numbers[mid] < diff)
			st = mid + 1;
		else return mid;
	}
	return -1;
}
vector<int> twoSum(vector<int>& numbers, int target) {

	vector<int> res_vec;
	for (int i = 0; i < numbers.size(); i++) {
		int diff = target - numbers[i];
		int res = do_BS(numbers, i + 1, numbers.size()-1,diff);
		if (res != -1)
		{
			res_vec = { i + 1,res + 1 };
			return res_vec;
		}
	}
	return res_vec;
}
};