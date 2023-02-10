class Solution:
    def maxDistance(self, grid: List[List[int]]) -> int:
        rows = len(grid)
        cols = len(grid[0])
        
        
        queue = deque()
        
        for r in range(rows):
            for c in range(cols):
                if grid[r][c]:
                    queue.append((r,c))
                    
                    
        dirs = [(0,1),(1,0),(0,-1),(-1,0)]
                    
        ans = -1
        visited = set()
        
        
        while queue:
            for _ in range(len(queue)):
                r,c = queue.popleft()
                
                for dr,dc in dirs:
                    new_row = r + dr
                    new_col = c+ dc
                    
                    print(dr,dc)
                    if rows> new_row >=0 and cols> new_col>=0 and not grid[new_row][new_col] and (new_row,new_col) not in visited:
                        visited.add((new_row,new_col))
                        queue.append((new_row,new_col))
                       
                    
                    
            ans += 1
                
        return -1 if ans==0 else ans
                
                