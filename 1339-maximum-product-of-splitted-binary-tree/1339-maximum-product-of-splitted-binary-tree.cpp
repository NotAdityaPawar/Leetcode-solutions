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
    long long total = 0;
    long long ans = 0;
    void helper(TreeNode* root){
        if (root==NULL) return;
        total += root->val;
        helper(root->right);
        helper(root->left);
    }
    int undersum(TreeNode* root){
        if (root==NULL) return 0;
        int leftunder = undersum(root->left);
        int rightunder = undersum(root->right);
        
        ans = max({ans,(total-leftunder)*leftunder, (total-rightunder)*rightunder});
        
        return leftunder + rightunder + root->val;
    }
public:
    int maxProduct(TreeNode* root) {
        int mod = 1e9+7;
        helper(root);
        undersum(root);
        return ans%mod;
    }
};