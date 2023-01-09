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
        if (root==NULL) return {};
        stack<TreeNode*> s;
        vector<int> arr;
        s.push(root);
        while (s.empty()==false){
            auto front = s.top();
            s.pop();
            
            arr.push_back(front->val);
            
            if (front->right){
                s.push(front->right);
            }
            if (front->left)
                s.push(front->left);
        }
        return arr;
    }
};