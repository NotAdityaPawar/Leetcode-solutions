# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        lst = []
        for list in lists:
            while list:
                lst.append(list.val)
                list = list.next
                
        lst.sort()
        
        
        head = point = ListNode(0)
        
        for val in lst:
            point.next = ListNode(val)
            point = point.next
            
        return head.next
        
        print(lst)