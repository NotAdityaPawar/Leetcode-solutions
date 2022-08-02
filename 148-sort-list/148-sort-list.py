# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        self.node = []
        
        
        while head:
            self.node.append(head.val)
            head = head.next
            
            
        head = point = ListNode(0)
        
        for n in sorted(self.node):
            point.next = ListNode(n)
            point = point.next
            
            
        return head.next