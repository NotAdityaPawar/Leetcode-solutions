Using iteration
​
```
vector<int> ans;
stack<TreeNode*> s;
s.push(root);
if (root==NULL) return {};
while (s.empty()==false){
root =  s.top();
s.pop();
ans.push_back(root->val);
if (root->right){
s.push(root->right);
}
if (root->left){
s.push(root->left);
}
}
return ans;
}
```
​
​
Using recurrsion
​
```
void preorder(TreeNode* root,vector<int> &ans){
if (root==NULL){
return;
}
ans.push_back(root->val);
if (root->left)preorder(root->left,ans);
if (root->right) preorder(root->right,ans);
}
vector<int> preorderTraversal(TreeNode* root) {
vector<int> ans;
preorder(root,ans);
return ans;
}
```