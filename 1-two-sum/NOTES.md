1. most intutive will be to use the 2 loop
2. using the unordered_map
```
vector<int> ans;
unordered_map<int,int> mp;
for (int i=0;i<nums.size();i++){
int no = target - nums[i];
if (mp.find(no)!=mp.end()){
ans.push_back(mp[no]);
ans.push_back(i);
return ans;
}
mp[nums[i]] = i;
}
return ans;
```
3. Python solution
```
class Solution:
def twoSum(self, nums: List[int], target: int) -> List[int]:
dic = {}
for i,n in enumerate(nums):
other = target - n
if other in dic:
return [dic[other],i]
else :
dic[n] = i
```