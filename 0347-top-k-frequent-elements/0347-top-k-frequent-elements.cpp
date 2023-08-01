class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        for(int  i = 0 ;i < nums.size(); i++){
            mp[nums[i]]++;
        }
        for(int i = -1e4 ; i <= 1e4 ; i++){
            pq.push({mp[i],i});
        }
        vector<int>b;
        while(k--){
            b.push_back(pq.top().second);
            pq.pop();
        }
        return b;
    }
};