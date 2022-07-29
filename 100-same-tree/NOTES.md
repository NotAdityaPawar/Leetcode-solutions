Failed by checking and building the array of inorder traversal
​
​
```
bool isSameTree(TreeNode* p, TreeNode* q) {
if (p==NULL and q==NULL) return true;
if (p!=NULL and q!=NULL){
return (p->val==q->val) and isSameTree(p->left,q->left) and isSameTree(p->right,q->right);
}
return false;
}
```