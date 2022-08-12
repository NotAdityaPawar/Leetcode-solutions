Using the custom bit counting
​
```
class Solution:
def countBits(self, n: int) -> List[int]:
def countbit(a):
ans = 0
while a:
ans += a&1
a>>=1
return ans
ans = []
for i in range(n+1):
ans.append(countbit(i))
return ans
```