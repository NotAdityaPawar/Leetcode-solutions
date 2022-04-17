set <int> s = {nums.begin(),nums.end()};
​
How we put the array in set!!!
1. Using the set
```
def containsDuplicate(self, nums: List[int]) -> bool:
s = set()
for i in nums:
s.add(i)
return not (len(s)==len(nums))
```