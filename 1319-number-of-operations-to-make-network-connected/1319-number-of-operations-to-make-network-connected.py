class Solution:
    def makeConnected(self, n: int, connections: List[List[int]]) -> int:
        cables = len(connections)
        if cables<n-1:
            return -1
        
        adj = {i:[] for i in range(n)}
        
        for u,v in connections:
            adj[u].append(v)
            adj[v].append(u)
            
        print(adj)
        ans = 0
        
        visited = set()
        def dfs(node,adj):
            visited.add(node)
            for next_node in adj[node]:
                if next_node not in visited:
                    dfs(next_node,adj)
       
        for i in range(n):
            if i not in visited:
                ans += 1
                
                dfs(i,adj)
                
        return ans-1
        