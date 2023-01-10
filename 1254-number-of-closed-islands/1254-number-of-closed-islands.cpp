class Solution {
public:
    
    bool dfs(vector<vector<int>> &grid,int i,int j){
        if (i<0 or j<0 or i>=grid.size() or j>=grid[0].size()){
            return false;
        }
        
        
        if (grid[i][j]==1) return true;
        grid[i][j] = 1;
        
        bool d1 = dfs(grid,i+1,j);
        bool d2 = dfs(grid,i-1,j);
        bool d3 = dfs(grid,i,j+1);
        bool d4 = dfs(grid,i,j-1);
        
        return d1&&d2&&d3&&d4;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int ans = 0;
        
        int m = grid.size();
        int n = grid[0].size();
        
        for (int i=0;i<m;i++){
            for (int j = 0;j<n;j++){
                if (grid[i][j]==0){
                    ans += (dfs(grid,i,j)?1:0);
                }
            }
        }
        
        return ans;
    }
    
    
};