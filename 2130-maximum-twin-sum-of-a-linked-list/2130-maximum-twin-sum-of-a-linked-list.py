# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        ans = -1
        
        lst = []
        
        while head:
            lst.append(head.val)
            head = head.next
            
        i = 0
        j = len(lst)-1
        
        
        while i<j:
            ans = max(ans,lst[i] + lst[j])
            i += 1
            j -= 1
        return ans