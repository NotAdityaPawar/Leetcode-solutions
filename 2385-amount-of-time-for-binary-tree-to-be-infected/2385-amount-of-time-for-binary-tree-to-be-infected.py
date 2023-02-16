# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def amountOfTime(self, root: Optional[TreeNode], start: int) -> int:
        graph = defaultdict(list)
        
        def inorder(root):
            if root==None:
                return
            
            if root.left:
                graph[root.val].append(root.left.val)
                graph[root.left.val].append(root.val)
                inorder(root.left)
                
            if root.right:
                graph[root.val].append(root.right.val)
                graph[root.right.val].append(root.val)
                inorder(root.right)
                
                
        
        inorder(root)
        
        
        queue = deque()
        queue.append(start)
        visited = set()
        visited.add(start)
        ans = 0
        while queue:
            s = len(queue)
            ans += 1
            while s:
                temp = queue.popleft()
                for node in graph[temp]:
                    if node not in visited:
                        visited.add(node)
                        queue.append(node)
                s -= 1
        
        
        return ans-1