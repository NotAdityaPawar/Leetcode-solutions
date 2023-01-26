class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        points.sort(key = lambda x:x[1])
        
        ans = 1
        
        curr = points[0][1]
        
        for i in range(1,len(points)):
            if points[i][0]<=curr:
                continue
                
            ans += 1
            curr = points[i][1]
            
            
        return ans