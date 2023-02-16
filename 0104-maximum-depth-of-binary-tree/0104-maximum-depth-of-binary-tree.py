# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if root==None:
            return 0
        queue = deque()
        
        queue.append(root)
        
        
        level =  0
        while queue:
            s = len(queue)
            
            while s:
                temp = queue.popleft()
                if temp.right:
                    queue.append(temp.right)
                    
                if temp.left:
                    queue.append(temp.left)
                    
            
                s -= 1
            level += 1
                
        return level