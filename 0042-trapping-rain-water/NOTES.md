Using the 2 arrays
​
```
def trap(self, height: List[int]) -> int:
n = len(height)
ans = 0
max_left = [0]*n
max_right = [0]*n
for i in range(1,n):
max_left[i] = max(height[i-1],max_left[i-1])
for i in range(n-2,-1,-1):
max_right[i] = max(height[i+1],max_right[i+1])
for i in range(n):
water = min(max_left[i],max_right[i])
if water>height[i]:
ans += water-height[i]
return ans
```