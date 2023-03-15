# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isCompleteTree(self, root: Optional[TreeNode]) -> bool:
        
        if root==None:
            return True
        q = deque()
        q.append(root)
        
        flag = False
        while q:
            temp = q.popleft()
            
            if temp==None:
                flag = True
                
                
            else:
                if flag==True:
                    return False
                
                else:
                    q.append(temp.left)
                    q.append(temp.right)
                    
                    
        
        return True
            