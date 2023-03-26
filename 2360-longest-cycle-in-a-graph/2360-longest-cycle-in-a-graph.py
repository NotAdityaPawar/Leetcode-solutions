class Solution:
    ans = -1
    def longestCycle(self, edges: List[int]) -> int:
        dist = dict()
        
        n = len(edges)
        visited = [0]*n

        
        
        for node in range(n):
            if not visited[node]:
                dist = {}
                dist[node] = 1
                
                self.dfs(node,edges,dist,visited)
                
        return self.ans
    
    
    
    
    def dfs(self,node,edges,dist,visited):
        visited[node] = 1
        nei = edges[node]
        if nei != -1 and not visited[nei]:
            dist[nei] = dist[node] + 1
            
            self.dfs(nei,edges,dist,visited)
            
        else:
            if nei in dist:
                self.ans = max(self.ans,dist[node]-dist[nei] + 1)