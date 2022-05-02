Using two different list
```
def sortArrayByParity(self, nums: List[int]) -> List[int]:
lst1 = []
lst2 = []
for i in nums:
if i%2==0:
lst1.append(i)
else:
lst2.append(i)
nums = lst1[:]+lst2[:]
return nums
```
​
Using the lambda function]
```
def sortArrayByParity(self, nums: List[int]) -> List[int]:
nums.sort(key = lambda x:x%2)
return nums
```