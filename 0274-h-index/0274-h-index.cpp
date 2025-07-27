class Solution {
public:
    int hIndex(vector<int>& citations) {
    int sz = citations.size();
    int mx = 00;
    sort(citations.begin(), citations.end());
    reverse(citations.begin(), citations.end());
    int st = 0, end = sz - 1;
    while (st <= end) {
        int mid = (st + end) / 2;
        if (citations[mid] >= mid + 1) {
            mx = mid+1;
            st = mid + 1;
        }
        else end = mid - 1;
    }
    return mx;
}
};