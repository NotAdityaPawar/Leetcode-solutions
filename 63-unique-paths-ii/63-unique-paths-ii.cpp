class Solution {
public:
    int recur(int i,int j,int r,int c,vector<vector<int>> grid,vector<vector<int>> &dp){
        if (i==r or j==c) return dp[i][j] = 0;
        if (grid[i][j]==1) return dp[i][j] = 0;
        if (dp[i][j]!=-1){
            return dp[i][j];
        }
        if (i==r-1 and j==c-1){
            return dp[i][j] =  1;
        }
        return dp[i][j] =  recur(i+1,j,r,c,grid,dp) + recur(i,j+1,r,c,grid,dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int r = obstacleGrid.size();
        int c = obstacleGrid[0].size();
        vector<vector<int>> dp(r+1,vector<int>(c+1,-1));
        return recur(0,0,r,c,obstacleGrid,dp);
    }
};