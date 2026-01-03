class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    unordered_map<int, bool>taked, found;
    for (int i = 0; i < nums.size(); i++)
        found[nums[i]] = 1;
    int ans = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (taked[nums[i]] == false) {
            int current_length = 1;
            taked[nums[i]] = true;
            int cur_number = 1 + nums[i];
            int cur_ans = 1;
            while (found[cur_number]) {
                taked[cur_number] = true;
                cur_ans++;
                cur_number++;
            }
            cur_number = nums[i] - 1;
            while (found[cur_number]) {
                taked[cur_number] = true;
                cur_ans++;
                cur_number--;
            }
            ans = max(ans, cur_ans);
        }
    }
    return ans;
}
};