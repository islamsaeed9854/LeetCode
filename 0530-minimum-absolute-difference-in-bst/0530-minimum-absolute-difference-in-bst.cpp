/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
vector<int>nums;

    void traverse(TreeNode * current_ptr){
        if(current_ptr == nullptr)
           return ;
           nums.push_back(current_ptr->val);
        traverse(current_ptr->left);
        traverse(current_ptr->right);
    }
    int getMinimumDifference(TreeNode* root) {
       traverse(root);
       sort(nums.begin(),nums.end());
       int mn = 1e8;
       for(int i = 0 ; i < nums.size()-1 ;i++){
        mn = min(mn , nums[i+1] - nums[i]);
       } 
      return mn;
    }
};