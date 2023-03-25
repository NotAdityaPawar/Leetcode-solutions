class Solution:
    def countPairs(self, n: int, edges: List[List[int]]) -> int:
        ans = 0
        
        graph = {i:[] for i in range(n)}
        
        for u,v in edges:
            graph[u].append(v)
            graph[v].append(u)
            
            
        ans = n*(n-1)//2
        
        visited = set()
        
        def dfs(node):
            if node in visited:
                return 0
            
            visited.add(node)
            nodes = 1
            for next_node in graph[node]:
                if next_node not in visited:
                    nodes += dfs(next_node)
            return nodes
        for i in range(n):
            if i not in visited:
                
                x = dfs(i)
                
                ans -= (x*(x-1))//2
                
                
        return ans