class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows==1: return s
        lst = ["" for i in range(numRows)]
        
        
        i = 0
        n = len(s)
        row = 0
        
        dir = -1
        while i<n:
            if i%(numRows-1)==0:
                dir *=-1
                
            lst[row] += s[i]
            row += dir
            i += 1
            
        print(lst)
        return "".join(lst)