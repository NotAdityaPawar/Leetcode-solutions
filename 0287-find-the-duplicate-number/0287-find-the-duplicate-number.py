class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        items = {}
        for i in nums:
            if i not in items:
                items[i] = 1
            else:
                items[i] += 1
                
        for i in items:
            if items[i]>1:
                return i
            
        return -1