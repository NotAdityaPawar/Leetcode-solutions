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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (root==NULL) return {};
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        int cnt = 0;
        while (q.empty()==false){
            int s = q.size();
            vector<int> level;
            while (s--){
                TreeNode* temp = q.front();
                q.pop();
                if (temp->left){
                    q.push(temp->left);
                }
               
                if (temp->right){
                    q.push(temp->right);
                }
                level.push_back(temp->val);
            }
            cnt++;
            if (cnt%2==0){
                reverse(level.begin(),level.end());
            }
            ans.push_back(level);
        }
        return ans;
    }
};