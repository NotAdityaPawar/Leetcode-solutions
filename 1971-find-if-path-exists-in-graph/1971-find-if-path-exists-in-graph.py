class Solution:
    def ispath(self,src,des,lst):
        pass
    def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
        lst = {i:[] for i in range(n)}
        
        for a,b in edges:
            lst[a].append(b)
            lst[b].append(a)
            
            
        seen = [False]*n
        
        def dfs(node):
            if node==destination:
                return True
            
            if not seen[node]:
                seen[node] = True
                for next_node in lst[node]:
                    if dfs(next_node):
                        return True

            return False
        return dfs(source)
            
        
        