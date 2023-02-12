class Solution:
    fuel = 0
    def minimumFuelCost(self, roads: List[List[int]], seats: int) -> int:
        n = len(roads)+1
        
        graph = {i:[] for i in range(n)}
        
        for a,b in roads:
            graph[a].append(b)
            graph[b].append(a)
            
        #print(graph)
        
        
        def dfs(node,parent):
            representative = 1
            
            for next_node in graph[node]:
                if next_node!=parent:
                    representative += dfs(next_node,node)
            
            if node!=0:
                
                self.fuel += ceil(representative/seats)
        
            return representative
        
        
        dfs(0,-1)
        print()
        
        return self.fuel