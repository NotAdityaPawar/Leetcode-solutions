slow and fast ptr tech.
check wheather the slow and fast pointer matches or not
​
Naive approach of using the set for adding and finding the head node in the set, if found return True else return False
​
time- O(n), space- O(n) for the set
​
```
class Solution:
def hasCycle(self, head: Optional[ListNode]) -> bool:
s = set()
while head:
if head in s:
return True
s.add(head)
head = head.next
return False
```
​
Python floyd cycle detection algorithm
​
time- O(n), space = O(1)
​
```
class Solution:
def hasCycle(self, head: Optional[ListNode]) -> bool:
fast = head
slow = head
while fast and fast.next:
slow = slow.next
fast = fast.next.next
if fast==slow:
return True
return False
```
​