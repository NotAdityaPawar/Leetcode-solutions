1. naive solution :- two for loops **TLE**
2. Using the discuss section
​
```
def productExceptSelf(self, nums: List[int]) -> List[int]:
p = 1
n = len(nums)
ans = []
for i in range(0,n):
ans.append(p)
p = p*nums[i]
p = 1
for i in range(n-1,-1,-1):
ans[i] = ans[i]*p
p = p*nums[i]
return ans
print(ans)
```