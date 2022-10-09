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
    void recur(TreeNode* root,vector<int> &in){
        if (root==NULL) return;
        if (root->left) recur(root->left,in);
        in.push_back(root->val);
        if (root->right) recur(root->right,in);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> inorder;
        recur(root,inorder);
        int n = inorder.size();
        for (int i = 0;i<n;i++){
            for (int j = i+1;j<n;j++){
                if (inorder[i] + inorder[j]==k){
                    return true;
                }
            }
        }
        return false;
    }
};