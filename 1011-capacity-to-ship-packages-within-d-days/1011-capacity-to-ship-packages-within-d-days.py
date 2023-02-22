class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        total = sum(weights)
        maxLoad = max(weights)
        
        def feasible(weights,c,days):
            daysneeded = 1
            curr_sum = 0
            
            for w in weights:
                curr_sum += w
                if curr_sum>c:
                    daysneeded += 1
                    curr_sum = w
                    
            return daysneeded<=days
        
        
        left = maxLoad
        right = total
        
        
        while left<right:
            mid = left + (right-left)//2
            if feasible(weights,mid,days):
                right = mid
                
            else:
                left = mid + 1
                
        
        return left