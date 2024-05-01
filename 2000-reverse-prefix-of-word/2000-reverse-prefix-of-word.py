class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        ans = ""
        n = len(word)
        flg = 0
        for i in range(n):
            if word[i]==ch:
                flg = i
                break
                
        ans += word[:flg+1]
        ans = ans[::-1]
        ans += word[flg+1:]
        return ans
                
                
        