class Solution:
    def canJump(self, nums: List[int]) -> bool:
        minJump = 0
        for i in range(len(nums)-2,-1,-1):
            minJump += 1
            if nums[i]>=minJump:
                minJump = 0
            
        return minJump==0