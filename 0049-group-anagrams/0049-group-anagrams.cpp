class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>>mp;
    for (int i = 0; i < strs.size(); i++) {
        string tmp = strs[i];
        sort(tmp.begin(), tmp.end());
        mp[tmp].push_back(strs[i]); 
    }
    vector<vector<string>> ans;
    for (auto i : mp)
    {
        vector<string> tmp_vec;
        for (string str : i.second)
            tmp_vec.push_back(str);
        ans.push_back(tmp_vec);
    }
    return ans;
}

};