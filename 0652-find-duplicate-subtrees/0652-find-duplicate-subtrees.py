# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findDuplicateSubtrees(self, root: Optional[TreeNode]) -> List[Optional[TreeNode]]:
        def inorder(root):
            if root==None:
                return ""
            
            temp = ("(" + inorder(root.left)  + ")"+ str(root.val) + "(" + inorder(root.right) + ")")
            
            cnt[temp] += 1
            
            if cnt[temp]==2:
                ans.append(root)
            
            return temp
        
        
        cnt = collections.defaultdict(int)
        ans = []
        inorder(root)
        print(ans)
        return ans