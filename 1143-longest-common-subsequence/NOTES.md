@functools.lru_cache(None) will increase the performance of the code
1. Using recursion
​
```
class Solution:
def longestCommonSubsequence(self, text1: str, text2: str) -> int:
m = len(text1)
n = len(text2)
@functools.lru_cache(None)
def helper(text1,text2,m,n):
if m==0 or n==0:
return 0
if text1[m-1]==text2[n-1]:
return helper(text1,text2,m-1,n-1) + 1
else:
return max(helper(text1,text2,m-1,n),helper(text1,text2,m,n-1))
return helper(text1,text2,m,n)
```
​
2. Using dp
​
```
def longestCommonSubsequence(self, text1: str, text2: str) -> int:
n,m = len(text1),len(text2)
dp = [[0]*(m+1) for _ in range(n+1)]
for i in range(n):
for j in range(m):
if text1[i]==text2[j]:
dp[i+1][j+1] = dp[i][j] +1
else :
dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j])
return dp[-1][-1]
```