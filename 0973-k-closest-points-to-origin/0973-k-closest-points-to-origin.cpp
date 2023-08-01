class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double, int>, vector<pair<double, int>>, greater<pair<double, int>>> pq;
        vector<vector<int>> ans;
        for(int  i = 0; i < points.size() ; i++){
            int x = points[i][0] ;
            int y = points[i][1] ;
             pq.push({sqrt(pow(x,2)+pow(y,2)),i});
        }
        while(k--){
           vector<int>v;
            v.push_back(points[pq.top().second][0]);
            v.push_back(points[pq.top().second][1]);
            ans.push_back(v);
            pq.pop();
        }
       
        return ans;
    }
};