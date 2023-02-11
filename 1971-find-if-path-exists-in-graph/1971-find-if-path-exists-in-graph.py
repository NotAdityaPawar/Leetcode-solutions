class Solution:
    def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
        graph = {i:[] for i in range(n)}
        
        print(graph)
        
        for u,v in edges:
            graph[u].append(v)
            graph[v].append(u)
            
        queue = deque()
        
        visited = set()
        
        queue.append(source)
        
        while queue:
            node = queue.popleft()
            if node==destination:
                return True
            
            for n in graph[node]:
                if n not in visited:
                    visited.add(n)
                    queue.append(n)
                    
                    
                    
        
        return False