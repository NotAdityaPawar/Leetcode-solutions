class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int ans = 0;
        for (int i = 0;i<n;i++){
            for (int j = 0;j<matrix[0].size();j++){
                if (i>0 and j>0 and matrix[i][j]>0){
                    matrix[i][j] = 1 + min({matrix[i-1][j],matrix[i-1][j-1],matrix[i][j-1]});
                    
                }
                ans += matrix[i][j];
            }
        }
        return ans;
    }
};