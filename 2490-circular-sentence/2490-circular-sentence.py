class Solution:
    def isCircularSentence(self, sentence: str) -> bool:
        lst = sentence.split(" ")
        print(lst)
        
        n = len(lst)
        if n==1 and lst[0][0]==lst[0][-1]:
            return True
        
        
        for i in range(1,n):
            if lst[i][0]!=lst[i-1][-1]:
                return False
            
        if lst[n-1][-1]!=lst[0][0]:
            return False
            
        return True