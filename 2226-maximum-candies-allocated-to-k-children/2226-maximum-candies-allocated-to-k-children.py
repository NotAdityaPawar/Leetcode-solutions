class Solution:
    def maximumCandies(self, candies: List[int], k: int) -> int:
        s = sum(candies)
        
        if s<k:
            return 0
        
        left = 1
        right = sum (candies)
        
        def canallocate(candy):
            s = 0
            
            for i in candies:
                s += i//candy
                
            
            return True if s>=k else False
        ans = 0
        while left<=right:
            mid = (left+right)//2
            
            if canallocate(mid):
                ans =mid
                left = mid +1
                
                
            else:
                right = mid-1 
                
        return ans