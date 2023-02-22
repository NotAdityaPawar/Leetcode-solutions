# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def insertIntoBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        arr = []
        
        def dfs(root):
            if root==None:
                return
            
            if root.left:
                dfs(root.left)
                
            arr.append(root.val)
            if root.right:
                dfs(root.right)
                
        dfs(root)
        arr.append(val)
        arr.sort()
        
        def buildTree(arr,start,end):
            
            if start>end:
                return None
            mid = (start+end)//2
            root = TreeNode(arr[mid])
            
            root.right = buildTree(arr,mid+1,end)
            root.left = buildTree(arr,start,mid-1)
            return root
        return buildTree(arr,0,len(arr)-1)
        print(arr)