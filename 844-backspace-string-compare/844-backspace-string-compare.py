class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        def help(st):
            ans = []
            for i in st:
                if i!='#':
                    ans.append(i)
                elif ans:
                    ans.pop()
                    
            return "".join(ans)
        
        return help(s)== help(t)