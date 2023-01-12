class Solution:
    def countSubTrees(self, n: int, edges: List[List[int]], labels: str) -> List[int]:
        adj = {i:[] for i in range(n)}
        
        for a,b in edges:
            adj[a].append(b)
            adj[b].append(a)
            
            
        def dfs(cur,par):
            counter = collections.Counter()
            
            for child in adj[cur]:
                
                if child==par:
                    continue
                counter += dfs(child,cur)
            counter[labels[cur]] += 1
                
            result[cur] = counter[labels[cur]]
            return counter
        
        
        result = [0]*n
        dfs(0,None)
        
        
        return result