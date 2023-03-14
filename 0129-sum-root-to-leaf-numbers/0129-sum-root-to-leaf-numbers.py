# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    def sumNumbers(self, root: Optional[TreeNode],ans=0) -> int:
        if root==None:
            return 0
        
        ans = ans *10 + root.val
        
        if root.right==None and root.left==None:
            return ans
        
        
        return self.sumNumbers(root.left,ans) + self.sumNumbers(root.right,ans)