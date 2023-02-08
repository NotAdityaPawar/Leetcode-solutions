class Solution:
    def jump(self, nums: List[int]) -> int:
        ans = 0
        n = len(nums)
        
        cur_end = 0
        cur_far = 0
        
        
        for i in range(n-1):
            cur_far = max(cur_far,nums[i]+i)
            
            if i==cur_end:
                cur_end = cur_far
                ans += 1
                
                
        return ans