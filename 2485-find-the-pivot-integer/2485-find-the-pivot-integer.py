class Solution:
    def pivotInteger(self, n: int) -> int:
        s = n*(n+1)/2
        temp = 0
        for i in range(1,n+1):
            temp += i
            s -= i
            
            if s+i==temp:
                return i
            
        
        return -1