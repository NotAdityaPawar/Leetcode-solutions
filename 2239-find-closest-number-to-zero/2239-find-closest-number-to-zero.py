class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        n = len(nums)
        m = float('inf')
        for i in range(n):
            m = min(abs(nums[i]),m)
            
        
        
        lst = []
        
        for i in nums:
            if abs(i)==m:
                lst.append(i)
        print(lst)
        return sorted(lst)[-1]