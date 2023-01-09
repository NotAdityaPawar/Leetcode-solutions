1. using the hashtable
```
class Solution {
public:
int majorityElement(vector<int>& nums) {
unordered_map<int,int> mp;
for (int i=0;i<nums.size();i++){
mp[nums[i]]++;
}
for (auto i:mp){
if(i.second>floor(nums.size()/2)){
return i.first;
}
}
return {};
}
};
```
​
2. **check the partial sort and counting sort algo refer the discussion forum**
3. Using the python verson of hashmap
```
class Solution:
def majorityElement(self, nums: List[int]) -> int:
n = len(nums)
print(n)
dic = {i:0 for i in nums}
for i in nums:
dic[i]+=1
if (dic[i]>=n/2):
return i
```
​
Using the Boyer-Moore algo
​
```
int majorityElement(vector<int>& nums) {
int count = 0;
int candidate = 0;
for (auto num: nums){
if (count==0){
candidate = num;
}
if (num==candidate){
count += 1;
}
else count -= 1;
}
return candidate;
}
```