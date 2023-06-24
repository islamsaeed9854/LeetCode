class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum_left = 0, sum_right = 0;
        for(auto i :nums)
            sum_right += i;
        for(int i = 0; i < nums.size(); i++)
        {
            sum_right-=nums[i];
            if(sum_left == sum_right)
                return i;
            sum_left += nums[i];
        }
        return -1;
    }
};