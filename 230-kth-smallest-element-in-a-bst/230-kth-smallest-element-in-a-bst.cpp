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
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty() or root!=NULL){
            while(root!=NULL){
                s.push(root);
                root = root->left;
            }
            root = s.top();
            s.pop();
            if (--k==0){
                break;
            }
            root = root->right;
        }
        return root->val;
    }
};