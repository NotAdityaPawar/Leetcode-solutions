class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        s = set()
        
        for i in nums:
            s.add(i)
            
        return not (len(s)==len(nums))