class Solution:
    def maxSatisfaction(self, satisfaction: List[int]) -> int:
        satisfaction.sort(reverse = True)
        temp = 0
        ans = 0
        
        for i in satisfaction:
            if ans + i + temp < ans:
                break
                
            temp += i
            
            ans += temp
        
        
        return ans