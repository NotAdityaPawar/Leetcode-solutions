class Solution:
    def numSubseq(self, nums: List[int], target: int) -> int:
        n = len(nums)
        mod = 10**9 + 7
        nums.sort()
        
        ans = 0
        
        left = 0
        right = n-1
        
        while left<=right:
            if (nums[left] + nums[right]<=target):
                ans = (ans + pow(2,right-left,mod))%mod
                left += 1
                
            else:
                right -= 1
        
        
        return ans