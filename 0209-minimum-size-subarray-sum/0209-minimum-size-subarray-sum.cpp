class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

	int left = 0,min_count = 1e9+5, sum = 0;
	for (int i = 0; i < nums.size(); i++) {
		sum += nums[i];
		while (sum >= target&&left < nums.size()) {
			min_count = min(min_count, i - left + 1);
			sum -= nums[left++];
		}
	}
	return (min_count == 1e9+5 ? 0 : min_count);
}
};