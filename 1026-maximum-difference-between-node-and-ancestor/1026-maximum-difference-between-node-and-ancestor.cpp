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
    int helper(TreeNode* root,int curmax,int curmin){
        if (root==NULL){
            return curmax-curmin;
        }
        curmax = max(curmax,root->val);
        curmin = min(curmin,root->val);
        int right = helper(root->right,curmax,curmin);
        int left = helper(root->left,curmax,curmin);
        
        return max(left,right);
    }
public:
    int maxAncestorDiff(TreeNode* root) {
        if (root==NULL) return 0;
        return helper(root,root->val,root->val);
    }
};