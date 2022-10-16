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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return construct(nums,0,nums.size());
    }
    TreeNode* construct(vector<int> nums,int l,int r){
        if (l==r){
            return NULL;
        }
        int max_index = max(nums,l,r);
        TreeNode* root = new TreeNode(nums[max_index]);
        
        root->left = construct(nums,l,max_index);
        root->right = construct(nums,max_index+1,r);
        
        return root;
    }
    int max(vector<int> nums,int l,int r){
        int max_index = l;
        for (int i = l;i<r;i++){
            if (nums[i]>nums[max_index]){
                max_index = i;
            }
        }
        return max_index;
    }
};