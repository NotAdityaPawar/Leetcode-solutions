class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        left = 1
        right = max(piles)
        
        def caneat(time):
            s = 0
            for i in piles:
                s += math.ceil(i/time)
                
            return True if s<=h else False
        
        while left<=right:
            mid = (left + right)//2
            
            if caneat(mid):
                right = mid-1
                
            else:
                left = mid +1
                
        return left