}
bool canPartition(vector<int>& nums) {
int sum = 0;
for (auto i: nums){
sum += i;
}
if (sum%2==1){
return false;
}
int n = nums.size();
return isSubsetsum(nums,n,sum/2);
}
```
​
Using memoization TLE
​
```
bool isSubsetsum(vector<int> &nums,int n,int sum,vector<vector<int>> &dp){
if (sum==0){
return true;
}
if (n==0 and sum!=0){
return false;
}
if (dp[n][sum]!=-1){
return dp[n][sum];
}
if (nums[n-1]>sum){
return isSubsetsum(nums,n-1,sum,dp);
}
return isSubsetsum(nums,n-1,sum,dp) || isSubsetsum(nums,n-1,sum-nums[n-1],dp);
}
bool canPartition(vector<int>& nums) {
int sum = 0;
for (auto i: nums){
sum += i;
}
if (sum%2==1){
return false;
}
int n = nums.size();
vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
return isSubsetsum(nums,n,sum/2,dp);
}
```