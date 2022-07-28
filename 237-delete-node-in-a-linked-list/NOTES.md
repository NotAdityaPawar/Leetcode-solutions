*node = *node-> next will kinda replace the node pointer
​
Kinda hacked solution
​
```
class Solution:
def deleteNode(self, node):
node.val = node.next.val
node.next = node.next.next
```