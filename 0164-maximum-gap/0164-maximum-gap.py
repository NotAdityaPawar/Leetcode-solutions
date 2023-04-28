class Solution:
    def maximumGap(self, nums: List[int]) -> int:
        if len(nums)<2:
            return 0
        
        nums.sort()
        mx = -1
        # print(nums)
        for i in range(len(nums)-1):
            diff = abs(nums[i]- nums[i+1])
            mx = max(mx,diff)
            
        return mx