Using the modified postorder traversal
​
```
int ans = 0;
int recur(TreeNode* root){
if (root==NULL) return 0;
int left = recur(root->left);
int right = recur(root->right);
ans += abs(left-right);
return left+right+root->val;
}
int findTilt(TreeNode* root) {
recur(root);
return ans;
}
```