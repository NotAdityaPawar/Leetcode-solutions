class Solution:
    def totalFruit(self, fruits: List[int]) -> int:
        window = Counter()
        
        left = right = ans = 0
        
        
        while right<len(fruits):
            window[fruits[right]] += 1
            
            right += 1
            
            while len(window)>2:
                window[fruits[left]] -= 1
                if window[fruits[left]]==0:
                    del window[fruits[left]]
                    
                left += 1
                
            ans = max(ans,right-left)
            
            
        return ans
                    
                