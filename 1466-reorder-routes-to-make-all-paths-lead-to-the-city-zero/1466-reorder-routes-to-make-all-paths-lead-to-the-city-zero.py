class Solution:
    def minReorder(self, n: int, connections: List[List[int]]) -> int:
        actual  = set()
        
        g = [[] for _ in range(n)]
        
        for u,v in connections:
            g[u].append(v)
            g[v].append(u)
            
            actual.add((u,v))
            
            
        q = deque([0])
        
        visited = {0}
        
        
        ans = 0
        while q:
            node = q.popleft()
            for next_node in g[node]:
                if next_node not in visited:
                    if (next_node,node) not in actual:
                        ans += 1
                        
                    visited.add(next_node)
                    q.append(next_node)
                    
                    
        
        return ans