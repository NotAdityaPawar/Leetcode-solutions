class Solution:
    def compress(self, chars: List[str]) -> int:
        slow = 0
        fast = 0
        
        
        while fast< len(chars):
            while fast < len(chars) and chars[fast]==chars[slow]:
                fast += 1
            
            if fast-slow==1:
                slow = fast
                
            else:
                chars[slow + 1:fast] = str(fast-slow)
                slow = slow + 1 + len(str(fast-slow))
                fast = slow