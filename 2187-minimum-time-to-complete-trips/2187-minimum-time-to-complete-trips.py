class Solution:
    def minimumTime(self, time: List[int], totalTrips: int) -> int:
        left = 1
        right = max(time)*totalTrips
        
        
        def isenough(given_time):
            trips = 0
            
            for t in time:
                trips += given_time//t
            
            return trips>=totalTrips
        
        while left<right:
            mid = (left+right)//2
            if isenough(mid):
                right = mid
                
            else:
                left = mid+1
                
        
        return right
            
            