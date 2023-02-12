class Solution:
    def substringXorQueries(self, s: str, queries: List[List[int]]) -> List[List[int]]:
        n = len(s)
        
        mp = defaultdict(lambda :[-1,-1])
        for i in range(n-1,-1,-1):
            if s[i]=='0':
                mp[0] = [i,i]
                continue
                
            v = 0
            for j in range(i,n):
                v = v*2 + int(s[j])
                
                if v>2**32:
                    break
                
                mp[v] = [i,j]
                
        
        ans = []
        for a,b in queries:
            x = b^a
            
            ans.append(mp[x])
            
        print(ans)
        return ans