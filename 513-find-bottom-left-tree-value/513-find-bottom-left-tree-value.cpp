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
    int findBottomLeftValue(TreeNode* root) {
        vector<vector<int>> level;
        queue<TreeNode*> q;
        q.push(root);
        
        while (q.empty()==false){
            int s = q.size();
            vector<int> temp;
            while (s--){
                auto node = q.front();
                temp.push_back(node->val);
                q.pop();
                
                if (node->left){
                    q.push(node->left);
                }
                if (node->right){
                    q.push(node->right);
                }
            }
            level.push_back(temp);
        }
        
        int s = level.size();
        return level[s-1][0];
    }
};