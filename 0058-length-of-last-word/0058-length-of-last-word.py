class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        j = len(s)-1
        
        while (s[j]==' '):
            j-= 1
        
        cnt = 0
        while (j>=0 and s[j] != ' ' ):
            cnt += 1
            j -= 1
            
            
        return cnt