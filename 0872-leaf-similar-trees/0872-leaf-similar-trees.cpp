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
    void inorder(TreeNode* root, vector<int>& in){
        if (root==NULL) return;
        if (root->left==NULL and root->right==NULL) in.push_back(root->val);
        if (root->left) inorder(root->left,in);
        if (root->right) inorder(root->right,in);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> vec1;
        vector<int> vec2;
        inorder(root1,vec1);
        inorder(root2,vec2);
        
        return vec1==vec2;
        
    }
};