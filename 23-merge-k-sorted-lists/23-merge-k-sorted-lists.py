# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        self.lst = []
        
        for i in lists:
            while i:
                self.lst.append(i.val)
                i = i.next
                
            
        head = point = ListNode(0)
        for x in sorted(self.lst):
            point.next = ListNode(x)
            point = point.next
            
        return head.next