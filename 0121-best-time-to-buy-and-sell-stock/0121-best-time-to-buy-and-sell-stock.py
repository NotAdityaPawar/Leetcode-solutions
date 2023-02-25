class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        ans = 0
        mprice = 0
        
        for i in range(1,len(prices)):
            mprice += prices[i]-prices[i-1]
            mprice = max (0,mprice)
            ans = max(ans,mprice)
            
        return ans