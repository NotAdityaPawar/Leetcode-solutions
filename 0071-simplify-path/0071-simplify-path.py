class Solution:
    def simplifyPath(self, path: str) -> str:
        lst = [p for p in path.split("/") if p!="" and p!= "."]
        print(lst)
        ans = ""
        
        stack = []
        
        for i in lst:
            if i=='..':
                if len(stack)>0:
                    stack.pop()
                    
            else:
                stack.append(i)
        
        return "/" + "/".join(stack)