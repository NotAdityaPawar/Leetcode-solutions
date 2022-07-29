Using the queue data structure
​
```
vector<vector<int>> levelOrder(TreeNode* root) {
vector<vector<int>> ans;
if (root==NULL) return ans;
queue<TreeNode*> q;
q.push(root);
vector<int> grp;
while (!q.empty()){
int n = q.size();
while (n--){
TreeNode * temp = q.front();
grp.push_back(temp->val);
if (temp->left) q.push(temp->left);
if (temp->right) q.push(temp->right);
q.pop();
}
ans.push_back(grp);
grp.clear();
}
return ans;
}
```