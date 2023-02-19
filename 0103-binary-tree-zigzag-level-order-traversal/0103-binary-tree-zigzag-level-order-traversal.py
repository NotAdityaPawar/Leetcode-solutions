# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def zigzagLevelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        queue = deque()
        if root==None:
            return []
        queue.append(root)
        res = []
        level = 0
        
        while queue:
            s = len(queue)
            level += 1
            arr = []
            while s:
                node = queue.popleft()
                
                if node.left:
                    queue.append(node.left)
                    
                if node.right:
                    queue.append(node.right)
                    
                arr.append(node.val)
                s -= 1
            if level%2==0:
                res.append(arr[::-1])
            else:
                res.append(arr)
            
        return res
            