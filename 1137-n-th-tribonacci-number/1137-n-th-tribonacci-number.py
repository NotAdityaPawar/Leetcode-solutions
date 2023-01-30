class Solution:
    def tribonacci(self, n: int) -> int:
        
        trib = [0 for _ in range(38)]
        trib[0] = 0
        trib[1] = 1
        trib[2] = 1
        
        
        if n==0 or n==1 or n==2:
            return trib[n]
        
        for i in range(3,n+1):
            trib[i] = trib[i-1] + trib[i-2] + trib[i-3]
            
            
        return trib[n]