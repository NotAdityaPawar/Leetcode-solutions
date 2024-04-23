class Solution:
    def findMinHeightTrees(self, n: int, edges: List[List[int]]) -> List[int]:
        graph = {i:[] for i in range(n)}
        
        for u,v in edges:
            graph[v].append(u)
            graph[u].append(v)
            
            
        print(graph)
        
        leaves = [i for i in graph if len(graph[i]) == 1]
        print(leaves)
        if n==1:
            return [0]
        
        
        while n>2:
            n -= len(leaves)
            newleaves = []
            
            for i in leaves:
                j = graph[i].pop()
                graph[j].remove(i)
                
                if len(graph[j])==1:
                    newleaves.append(j)
                    
            leaves = newleaves
            
        return leaves
            
            