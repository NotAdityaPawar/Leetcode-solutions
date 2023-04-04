class Solution:
    def partitionString(self, s: str) -> int:
        n = len(s)
        i = 0
        temp = set()
        ans = 1
        while i<n:
            if s[i] not in temp:
                temp.add(s[i])
                
                
            else:
                ans += 1
                temp.clear()
                temp.add(s[i])
                
            # print(temp)
                
                
            i += 1
            
            
        return ans
            