Using the recursion
```
​
class Solution {
public:
int sumNumbers(TreeNode* root,int currSum = 0) {
if (root==NULL) return 0;
currSum = currSum * 10 + root->val;
​
if (root->left ==NULL and root->right==NULL) return currSum;
​
return sumNumbers(root->left, currSum) + sumNumbers(root->right, currSum);
}
};
```
​