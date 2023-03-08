class Solution:
    def repeatedCharacter(self, s: str) -> str:
        container = set()
        
        for char in s:
            if char in container:
                return char
            else:
                container.add(char)
                
                
        