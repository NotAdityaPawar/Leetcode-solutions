# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDiffInBST(self, root: Optional[TreeNode]) -> int:
        lst = []
        def inorder(root):
            if root==None:
                return
            
            if root.left:
                inorder(root.left)
                
            lst.append(root.val)
            if root.right:
                inorder(root.right)
                
        
        inorder(root)
        
        ans = float('inf')
        
        for i in range(len(lst)-1):
            ans = min(ans,abs(lst[i]-lst[i+1]))
            
        return ans