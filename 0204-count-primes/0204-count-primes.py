class Solution:
    def countPrimes(self, n: int) -> int:
        
        if n<=2:
            return 0
        
        prime = [True]*n
        
        ans = [2]
        
        for i in range(3,n,2):
            if prime[i]:
                ans.append(i)
                for j in range(2*i,n,i):
                    prime[j] = False
                    
        print(ans)
        return len(ans)