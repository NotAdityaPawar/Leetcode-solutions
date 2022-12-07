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
    int sum = 0;
    int util(TreeNode* root, int low, int high){
        if (root){
            util(root->left,low, high);
            if (root->val>=low and root->val <= high){
                sum += root->val;
            }
            util(root->right,low,high);
        }
        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        util(root,low,high);
        return sum ;
    }
};