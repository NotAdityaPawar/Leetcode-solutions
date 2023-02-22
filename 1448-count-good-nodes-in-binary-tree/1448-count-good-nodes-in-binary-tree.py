# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    ans = 0
    def goodNodes(self, root: TreeNode) -> int:
        
        self.ans = 0
        
        def count(node,prevbest):
            if node==None:
                return 
            
            
            if node.val>=prevbest:
                self.ans += 1
            best = max (node.val,prevbest)
            
            if node.left:
                count(node.left,best)
                
            if node.right:
                count(node.right,best)
                
                
                
        count(root,float('-inf'))
        return self.ans