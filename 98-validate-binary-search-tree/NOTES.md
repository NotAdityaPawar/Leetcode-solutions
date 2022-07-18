1. Checking usign the inorder traversal of the bst which turn out to be WA
Check this test case `[2,2,2]`
Using the inorder traversal
```
void inorder(TreeNode* root,vector<int> &ans){
if (root==NULL) return;
if (root->left) inorder(root->left,ans);
ans.push_back(root->val);
if (root->right) inorder(root->right,ans);
}
bool isValidBST(TreeNode* root) {
vector<int> ans;
inorder(root,ans);
bool ansss =true;
for (int i =0;i<ans.size()-1;i++){
if (ans[i]>=ans[i+1]) {
ansss = false;
break;
}
}
if (ansss) return true;
else return false;
}
```