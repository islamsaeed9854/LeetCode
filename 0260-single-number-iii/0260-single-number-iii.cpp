class Solution {
public:
vector<int> singleNumber(vector<int>& nums) {
	unordered_map<int, int>mp;
	int ans_x_o_R = 0;
	for (int i = 0; i < nums.size(); i++) {
		for(int j = 0 ; j < 32 ;j++)
	     	mp[(nums[i]&(1<<j))]++;
		ans_x_o_R ^= nums[i];
	}
	int which_bit = 0;
	for(int i = 0; i< 32 ; i++)
		if (ans_x_o_R & (1 << i))
		{
			which_bit = i;
			break;
		}
	int fr_num = 0, sc_num = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] & (1 << which_bit)) {
			fr_num ^= nums[i];
		}
		else sc_num ^= nums[i];
	}
	return vector<int> {fr_num,sc_num};
}
};