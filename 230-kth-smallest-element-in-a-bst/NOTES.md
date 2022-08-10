​
Need to solve the Follow up
​
​
Inorder traversal returns the sorted value in BST.
​
```
int kthSmallest(TreeNode* root, int k) {
vector<int> ans;
inorder(root,ans);
return ans[k-1];
}
void inorder(TreeNode * root, vector<int> &ans){
if (!root){
return ;
}
inorder(root->left,ans);
ans.push_back(root-> val);
inorder(root->right,ans);
}
```
​
​