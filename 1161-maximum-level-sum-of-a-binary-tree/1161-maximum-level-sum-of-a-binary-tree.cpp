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
    int maxLevelSum(TreeNode* root) {
        int ans = INT_MIN;
        int level = -1;
        
        queue<TreeNode*> q;
        q.push(root);
        int cnt = 0;
        while (q.empty()==false){
            int n = q.size();
            int sum =0;
            cnt++;
            while (n--){
                auto temp = q.front();
                q.pop();
                sum += temp->val;
                
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
            if (sum> ans){
                ans = sum;
                level = cnt;
            }
        }
        return level;
    }
};