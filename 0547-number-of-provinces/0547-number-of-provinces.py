class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        if not isConnected:
            return 0
        
        n = len(isConnected)
        
        seen = set()
        
        def dfs(p):
            for q, adj in enumerate(isConnected[p]):
                if (adj==1) and (q not in seen):
                    seen.add(q)
                    dfs(q)
                    
                    
        cnt = 0
        
        for i in range(n):
            if i not in seen:
                dfs(i)
                cnt += 1
        
        return cnt