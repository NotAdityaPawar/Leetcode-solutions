class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (auto i: nums){
            sum += i;
        }
        if (sum%2==1){
            return false;
        }
        int n = nums.size();
        bool dp[sum/2+1][n+1];
        
        for (int i=0;i<=n;i++){
            dp[0][i] = true;
        }
        
        for (int i=1;i<=sum/2;i++){
            dp[i][0] = false;
        }
        
        for (int i=1;i<=sum/2;i++){
            for (int j =1;j<=n;j++){
                dp[i][j] = dp[i][j-1];
                
                if (i>=nums[j-1]){
                    dp[i][j] = dp[i][j] || dp[i-nums[j-1]][j-1];
                }
            }
        }
        return dp[sum/2][n];
        
    }
};