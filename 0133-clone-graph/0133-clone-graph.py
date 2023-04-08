"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

class Solution:
    def cloneGraph(self, node: 'Node') -> 'Node':
        if not node:
            return None
        q = deque([node])
        
        visited = set()
        m = {}
        while q:
            l = q.popleft()
            
            
            if l in visited:
                continue
                
            visited.add(l)
                
            if l not in m:
                m[l] = Node(l.val)
            for next_node in l.neighbors:
                if next_node not in m:
                    m[next_node] = Node(next_node.val)
                    
                m[l].neighbors.append(m[next_node])
                q.append(next_node)
                
        return m[node]