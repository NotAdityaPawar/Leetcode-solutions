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
    int sumNumbers(TreeNode* root, int currSum = 0) {
        if (root==NULL) return 0;
        
        currSum = 10* currSum + root->val;
        
        if (root->left==NULL and root->right == NULL) return currSum;
        
        return sumNumbers(root->left, currSum) + sumNumbers(root->right, currSum);
    }
};