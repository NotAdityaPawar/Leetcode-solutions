class Solution {
public:
    int helper(int i,int j,int n,int m, vector<vector<int>> &matrix, vector<vector<int>> &dp){
        
        
        if (j<0 or j>m-1) 
            return 1e9;
        
        if (i==0) return matrix[i][j];
        
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int up = matrix[i][j] + helper(i-1,j,n,m,matrix,dp);
        int ul = matrix[i][j] + helper(i-1,j-1,n,m,matrix,dp);
        int ur = matrix[i][j] + helper(i-1,j+1,n,m,matrix,dp);
        
        return dp[i][j] = min({up,ul,ur});
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans = INT_MAX;
        int n = matrix.size();
        int m = matrix[0].size();
        
        
        vector<vector<int>> dp(n,vector<int> (m,-1));
        
        
        
        
        for (int j = 0;j<m;j++){
            ans = min(ans,helper(n-1,j,n,m,matrix,dp));
        }
        return ans;
    }
};