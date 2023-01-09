use the xor property for this
​
int a when xor with the same number returns the zero and 1 otherwise
​
1. python solution for xor
​
```
class Solution:
def singleNumber(self, nums: List[int]) -> int:
n = nums[0]
for i in range(1,len(nums)):
n = n ^ nums[i]
return n
```