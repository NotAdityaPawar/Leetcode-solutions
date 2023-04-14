class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        stack = []
        i = 0
        for num in pushed:
            stack.append(num)
            while i<len(popped) and stack and popped[i]==stack[-1]:
                stack.pop()
                i += 1
                
        return len(stack)==0