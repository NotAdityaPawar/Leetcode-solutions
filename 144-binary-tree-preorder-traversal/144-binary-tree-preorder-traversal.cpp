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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s;
        s.push(root);
        
        if (root==NULL) return {};
        while (s.empty()==false){
            root =  s.top();
            s.pop();
            
            ans.push_back(root->val);
            
            if (root->right){
                s.push(root->right);
            }
            
            if (root->left){
                s.push(root->left);
            }
        }
        return ans;
    }
};