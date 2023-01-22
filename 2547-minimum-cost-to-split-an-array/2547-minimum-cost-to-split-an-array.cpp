class Solution {
public:
    int solve(vector<int>& nums,vector<int> &dp, int k,int i,int n){
        if (i>=n) return 0;
        if (dp[i]!=-1) return dp[i];
        int ans = INT_MAX;
        int cnt = 0;
        vector<int> mp(n,0);
        for (int j = i;j<n;j++){
            mp[nums[j]]++;
            if (mp[nums[j]]==2) cnt += 2;
            else if (mp[nums[j]]>2) cnt++;
            ans = min(ans,solve(nums,dp,k,j+1,n) + cnt + k);
        }
        return dp[i] = ans;
        
        
    }
    int minCost(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> dp(n,-1);
        
        return solve(nums,dp,k,0,n);
    }
};