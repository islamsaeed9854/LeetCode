class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        long long st = 0 ,  end = arr.size()-1, mid;
        long long ans = 1;
        while(st<=end){
            mid = (st+end)/2;
            long long diff = arr[mid] - (mid+1);
            if(diff>=k){
                ans = arr[mid] - ((diff-k)+1);
                end = mid-1;
            }
            else{
                 ans = arr[mid] + (k-diff);
                 st = mid+1;
            }
        }
        return ans;
    }
};



// 11 => 6

// 7 => 3