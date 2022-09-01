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
    int ans =0;
    int goodNodes(TreeNode* root) {
        if (root==NULL) return 0;
        preorder(root,root->val);
        return ans;
    }
    void preorder(TreeNode* root, int maxVal){
        if (root==NULL) return ;
        if (root->val>=maxVal) ans++;
        preorder(root->left,max(maxVal,root->val));
        preorder(root->right,max(maxVal,root->val));
    }
};