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
    void inorder(TreeNode* root,vector<int> &ans){
        if (root==NULL) return;
        if (root->left) inorder(root->left,ans);
        ans.push_back(root->val);
        if (root->right) inorder(root->right,ans);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);
        
        bool ansss =true;
        
        for (int i =0;i<ans.size()-1;i++){
            if (ans[i]>=ans[i+1]) {
                ansss = false;
                break;
            }
        }
        if (ansss) return true;
        else return false;
        
    }
};