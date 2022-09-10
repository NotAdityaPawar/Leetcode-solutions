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
    bool isSymmetric(TreeNode* root) {
        return (root==NULL) or isSymmetricalHelp(root->left,root->right);
    }
    bool isSymmetricalHelp(TreeNode* root_left, TreeNode* root_right){
        if (root_left==NULL or root_right==NULL){
            return root_left==root_right;
        }
        if (root_left->val!=root_right->val) return false;
        
        return isSymmetricalHelp(root_left->left, root_right->right) and isSymmetricalHelp(root_left->right,root_right->left);
    }
};