class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = 1000000;
        int  mx = 0 ;
        for(int i = 0; i < prices.size(); i++)
        {
            mx = max(mx, prices[i]-mn);
            mn = min (mn , prices[i]);
        }
        return mx;
    }
};