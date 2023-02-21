class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        count = Counter(nums)
        
        for a,b in count.items():
            if b==1:
                return a