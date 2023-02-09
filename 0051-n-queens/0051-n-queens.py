class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        col = set()
        posDiag = set()
        negDiag = set()
        ans = []
        
        grid = [["."]*n for _ in range(n)]
        
        def backtrack(r):
            if r==n:
                copy = ["".join(row) for row in grid]
                ans.append(copy)
                return
            
            for c in range(n):
                if c in col or r + c in posDiag or r-c in negDiag:
                    continue
                    
                col.add(c)
                posDiag.add(r+c)
                negDiag.add(r-c)
                grid[r][c] = "Q"
                backtrack(r+1)
                
                col.remove(c)
                posDiag.remove(r+c)
                negDiag.remove(r-c)
                grid[r][c] = "."
                
                
            
        backtrack(0)
        return ans