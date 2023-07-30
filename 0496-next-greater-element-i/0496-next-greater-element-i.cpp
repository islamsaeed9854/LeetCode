class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp,mp2;
        for(int  i = 0 ; i< nums1.size() ; i++){
            mp[nums1[i]] = i+1;
        }
        for(int  i = 0 ; i< nums2.size() ; i++){
            mp2[nums2[i]] = i+1;
        }
        vector<int>ans(nums1.size(),0);
        stack<int>st;
        for(int  i = nums2.size()-1 ; i >=0  ; i--){
             if(mp[nums2[i]]){
                 int is_found = -1;
            while(st.size()){
                if(st.top() > nums2[i])
                {
                    is_found = st.top();
                    break;
                }
                else{
                    st.pop();
                }
              }
                 if(is_found!=-1){
                      ans[mp[nums2[i]]-1]= is_found;
                 }
                 else{
                     ans[mp[nums2[i]]-1]=-1;
                 }
            }
            st.push(nums2[i]);
           
        }
        return ans;
    }
};