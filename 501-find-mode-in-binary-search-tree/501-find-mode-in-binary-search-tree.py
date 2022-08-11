# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findMode(self, root: Optional[TreeNode]) -> List[int]:
        arr = []
        def inorder(root):
            if root==None:
                return 
            if root.left:
                inorder(root.left)
            arr.append(root.val)
            
            if root.right:
                inorder(root.right)
                
        inorder(root)
        from collections import Counter
        
        count = Counter(arr)
        
        m = max([i for i in count.values()])
        
        
        ans = []
        for i in count:
            if m==count[i]:
                ans.append(i)
        
        print(count)
        
        print(arr)
        
        
        return ans