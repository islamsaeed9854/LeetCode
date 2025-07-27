class Solution {
public:
    int hIndex(vector<int>& citations) {
    int sz = citations.size();
    int mx = 00;
    sort(citations.begin(), citations.end());
    reverse(citations.begin(), citations.end());
    for (int i = 0; i < sz; i++) {
        if (i + 1 <= citations[i]) {
            mx = i + 1;
        }
    }
    return mx;
}
};