class Solution:
    def findKthPositive(self, arr: List[int], k: int) -> int:
        nums = []
        for i in range(3000):
            if i not in arr:
                nums.append(i)
                
        return nums[k]