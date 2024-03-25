use the unordered map next time
​
Used the dictionary
​
```
class Solution:
def findDuplicates(self, nums: List[int]) -> List[int]:
dic = {i:0 for i in nums}
for i in range(len(nums)):
dic[nums[i]] += 1
ans = []
for i in dic:
if dic[i]>1:
ans.append(i)
return ans
```
​
**Using the same array as the hash map, this solution is litttt**
​
```
class Solution:
def findDuplicates(self, nums: List[int]) -> List[int]:
ans = []
for i in nums:
if nums[abs(i)-1]<0:
ans.append(abs(i))
else:
nums[abs(i)-1] *= -1
return ans
```