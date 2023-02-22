class Solution:
    def findCenter(self, edges: List[List[int]]) -> int:
        n = len(edges) +1 
        graph = {i:[] for i in range(1,n+1)}
        
        for a,b in edges:
            graph[a].append(b)
            graph[b].append(a)
            
        print(graph)
        for a,b in graph.items():
            if len(graph[a])==n-1:
                return a
        return n