class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        if len(p)>len(s):
            return []
        
        res = []
        n1 = len(s)
        n2 = len(p)
        
        window = [0]*26
        freq = [0]*26
        
        
        for i in range(n2):
            freq[ord(p[i])-ord('a')] += 1
            window[ord(s[i])-ord('a')] += 1
            
            
        if window==freq:
            res.append(0)
            
        for i in range(n2,n1):
            window[ord(s[i-n2])-ord('a')] -=1
            window[ord(s[i])-ord('a')] += 1
            
            if window==freq:
                res.append(i-n2+1)
                
        return res