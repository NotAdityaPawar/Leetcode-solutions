it is simply the fibnonacii sequence
```
class Solution:
def climbStairs(self, n: int) -> int:
f = [0,1]
for i in range(n+2):
f.append(f[-1]+f[-2])
return f[n+1]
```
​