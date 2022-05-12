from itertools import permutations
class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        ans = []
        perm = permutations(nums)
        perm = set(perm)
        for i in perm:
            ans.append(i)
        return ans