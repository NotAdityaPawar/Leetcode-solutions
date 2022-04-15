# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def trimBST(self, root: Optional[TreeNode], low: int, high: int) -> Optional[TreeNode]:
        def trimNode(node):
            if not node:
                return None
            
            elif node.val>high:
                return trimNode(node.left)
            
            elif node.val<low:
                return trimNode(node.right)
            
            else:
                node.left = trimNode(node.left)
                node.right = trimNode(node.right)
                return node
        
        
        return trimNode(root)