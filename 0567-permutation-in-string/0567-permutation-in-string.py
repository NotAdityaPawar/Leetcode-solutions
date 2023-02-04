class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        n1 = len(s1)
        n2 = len(s2)
        
        s1 = "".join(sorted(s1))
        if n1>n2:
            return False
        
        def sort(s):
            return "".join(sorted(s))
        
        
        for i in range(n2):
            if s1==sort(s2[i:i+n1]):
                return True
            
        
        return False