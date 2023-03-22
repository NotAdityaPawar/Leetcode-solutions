class Solution:
    def minScore(self, n: int, roads: List[List[int]]) -> int:
        graph = [[] for _ in range(n+1)]
        
        for u,v,w in roads:
            graph[u].append((v,w))
            graph[v].append((u,w))
            
            
        def bfs(n,graph):
            visited = [False]*(n+1)
            
            q = deque()
            ans = float('inf')
            
            q.append(1)
            visited[1] = True
            
            while q:
                node = q.popleft()
                for edge in graph[node]:
                    ans = min(ans,edge[1])
                    
                    if not visited[edge[0]]:
                        visited[edge[0]] = True
                        
                        q.append(edge[0])
                        
            return ans
        
        return bfs(n,graph)