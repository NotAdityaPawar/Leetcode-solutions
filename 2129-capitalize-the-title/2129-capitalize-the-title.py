class Solution:
    def capitalizeTitle(self, title: str) -> str:
        words = title.split()
        print(words)
        
        ans = []
        for word in words:
            if len(word)<3:
                ans.append(word.lower())
            else:
                temp = word.capitalize()
                ans.append(temp)
                
        return " ".join(ans)