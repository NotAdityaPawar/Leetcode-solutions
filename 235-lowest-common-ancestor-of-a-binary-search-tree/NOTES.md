Using the recursion
​
```
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
if ((root->val>p->val) and (root->val>q->val)){
return lowestCommonAncestor(root->left,p,q);
}
if ((root->val<p->val) and (root->val<q->val)){
return lowestCommonAncestor(root->right,p,q);
}
return root;
}
```