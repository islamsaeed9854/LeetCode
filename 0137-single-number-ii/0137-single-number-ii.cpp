class Solution {
public:
   int singleNumber(vector<int>& nums) {
	unordered_map<int, int>mp;
	for (int i = 0; i < nums.size(); i++) {
		for (int j = 0; j < 32; j++) {
			if ((nums[i] & (1 << j)))
			{
				mp[j]++;
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < 32; i++) {
		mp[i] %= 3;
		if(mp[i])
		ans += (1 << i);
	}
	return ans;
}
};



