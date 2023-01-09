class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        
        
        // 1,2,3,4
        int dir = 1;
        int up = 0;
        int down = m-1;
        int left = 0;
        int right = n-1;
        
        int count = 0;
        
        int total = m*n;
        
        while (count<total){
            if (dir==1){
                for (int i = left;i<=right;i++){
                    ans.push_back(matrix[up][i]);
                    count++;
                }
                
                dir = 2;
                up++;
            }
            else if (dir==2){
                for (int i = up;i<=down;i++){
                    ans.push_back(matrix[i][right]);
                    count++;
                }
                dir = 3;
                right--;
            }
            else if (dir==3){
                for (int i = right;i>=left;i--){
                    ans.push_back(matrix[down][i]);
                    count++;
                }
                dir = 4;
                down--;
            }
            
            else if (dir==4){
                for (int i = down;i>=up;i--){
                    ans.push_back(matrix[i][left]);
                    count++;
                }
                dir = 1;
                left++;
            }
        }
        return ans;
    }
};