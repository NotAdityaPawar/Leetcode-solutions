class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        count = 0
        for i in range(len(s)-1,-1,-1):
            if (s[i]==' ' and count==0):
                continue
            if (count and s[i]==' '):
                break
                
            count += 1
                
        return count
            