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
    int getMinimumDifference(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s;
        
        TreeNode* curr = root;
        
        while (!s.empty() or curr!=NULL){
            while (curr){
                s.push(curr);
                curr = curr ->left;
            }
            curr = s.top();
            s.pop();
            ans.push_back(curr->val);
            curr = curr->right;
        }
        for (auto i:ans) cout<<i;
        
        int diff = INT_MAX;
        for (int i =1;i<ans.size();i++){
            diff = min(diff,ans[i]-ans[i-1]);
        }
        return diff;
    }
};