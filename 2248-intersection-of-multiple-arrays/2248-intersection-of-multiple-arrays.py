class Solution:
    def intersection(self, nums: List[List[int]]) -> List[int]:
        temp = []
        for i in nums:
            i = set(i)
            temp.append(i)
            
        ans = temp[0]
        
        for i in range(1,len(temp)):
            ans = ans & temp[i]
            
        return sorted(list(ans))
            
            