class Solution {
public:
    int numDistinct(string s, string t) {
        long long int n = s.size();
        long long int m = t.size();
        
        vector<vector<unsigned long long int >> dp(n+1,vector<unsigned long long int>(m+1,0));
        
        for (int i=0;i<=n;i++) dp[i][0] = 1;
        for (int j=1;j<=m;j++) dp[0][j] = 0;
        
        for (unsigned long long int  i=1;i<=n;i++){
            for (unsigned long long int j = 1;j<=m;j++){
                if (s[i-1]==t[j-1]){
                    dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][m];
    }
};