https://www.gee ksforgeeks.org/largest-sum-contiguous-subarray/
​
refer this articel for better learning
```
int maxSubArray(vector<int>& nums) {
int ans = INT_MIN;
int s = 0;
for (int i=0;i<nums.size();i++){
s += nums[i];
ans = max(ans,s);
s = max(0,s);
}
return ans;
}
```
​