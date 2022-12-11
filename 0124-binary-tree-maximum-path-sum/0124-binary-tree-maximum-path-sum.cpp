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
    int helper(TreeNode* root, int &ans){
        if (root==NULL) return 0;
        
        int left = helper(root->left, ans);
        int right = helper(root->right, ans);
        
        int temp = max(max(left,right) + root->val, root->val);
        int res = max(temp,left + right + root->val);
        
        ans = max(ans,res);
        return temp;
    }
public:
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        helper(root,ans);
        return ans;
    }
};