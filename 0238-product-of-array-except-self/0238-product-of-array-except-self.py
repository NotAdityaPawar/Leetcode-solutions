class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = [0]*n
        pre = [0]*n
        suf = [0]*n
        pre[0] = 1
        suf[n-1] = 1
        for i in range(1,n):
            pre[i] = pre[i-1] * nums[i-1]
            
        for i in range(n-2,-1,-1):
            suf[i] = suf[i+1] * nums[i+1]
        print(pre,suf)
            
        for i in range(n):
            ans[i] = suf[i]*pre[i]
            
            
        
        
        return ans