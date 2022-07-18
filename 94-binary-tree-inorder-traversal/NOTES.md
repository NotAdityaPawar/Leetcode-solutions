recursive done
have to chech the morris traversal
1. Using the recursion and helper function
```
vector<int> inorderTraversal(TreeNode* root) {
vector<int> ans;
helper(root,ans);
return ans;
}
private:
void helper(TreeNode *root,vector<int> &ans){
if (!root){
return ;
}
helper(root->left,ans);
ans.push_back(root->val);
helper(root->right,ans);
}
```