# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedListToBST(self, head: Optional[ListNode]) -> Optional[TreeNode]:
        arr = []
        
        def inorder(node):
            while node:
                arr.append(node.val)
                node = node.next
        
        inorder(head)
        print(arr)
        
        
        def convert(start,end):
            if start>end:
                return None
            
            mid = start + (end-start)//2
            print(mid)
            root = TreeNode(arr[mid])
            root.left = convert(start,mid-1)
            root.right = convert(mid+1,end)
            
            
            return root
        
        return convert(0,len(arr)-1)
            
            
            
            
            
            
            