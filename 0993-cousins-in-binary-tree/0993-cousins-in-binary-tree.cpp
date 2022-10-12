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
    bool isCousins(TreeNode* root, int x, int y) {
        
        queue<TreeNode*> q;
        
        q.push(root);
        while (q.empty()==false){
            int s = q.size();
            bool isx = false;
            bool isy = false;
            while (s--){
                TreeNode* temp = q.front();
                q.pop();
                
                if (temp->val==x) isx = true;
                if (temp->val==y) isy = true;
                
                if (temp->left and temp->right){
                    if ((temp->left->val==x and temp->right->val==y) or (temp->right->val==x and temp->left->val==y)){
                        return false;
                    }
                }
                
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
                
            }
            if (isx and isy) return true;
        }
        return false;
    }
};