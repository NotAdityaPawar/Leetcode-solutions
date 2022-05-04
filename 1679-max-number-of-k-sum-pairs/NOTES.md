Using brute force -> TLE
```
def maxOperations(self, nums: List[int], k: int) -> int:
count = 0
for i in range(len(nums)):
if nums[i] == -1: continue
for j in range(i+1,len(nums)):
if nums[j]==-1:
continue
if nums[i]+nums[j]==k:
count += 1
nums[i] = -1
nums[j] = -1
break
return count
```
​