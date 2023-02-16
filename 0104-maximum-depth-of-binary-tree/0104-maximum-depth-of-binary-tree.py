# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        height = 0
        
        def getheight(root):
            if root==None:
                return 0
            
            return 1 + max(getheight(root.left), getheight(root.right))
                
        return getheight(root)
        
    