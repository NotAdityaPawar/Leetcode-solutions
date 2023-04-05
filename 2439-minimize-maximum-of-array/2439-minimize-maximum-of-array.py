class Solution:
    def minimizeArrayValue(self, nums: List[int]) -> int:
        ans = 0
        
        pre_sum = 0
        
        for i in range(len(nums)):
            pre_sum += nums[i]
            
            ans = max(ans,ceil(pre_sum/(i+1)))
        
        return ans