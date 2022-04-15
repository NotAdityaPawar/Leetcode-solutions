Make a utility function for trimming the nodes
```
def trimBST(self, root: Optional[TreeNode], low: int, high: int) -> Optional[TreeNode]:
def trimNode(node):
if not node:
return None
elif node.val>high:
return trimNode(node.left)
elif node.val<low:
return trimNode(node.right)
else:
node.left = trimNode(node.left)
node.right = trimNode(node.right)
return node
return trimNode(root)
```