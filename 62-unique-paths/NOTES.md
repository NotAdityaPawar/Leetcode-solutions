TLE from the recursion
​
```
def uniquePaths(self, m: int, n: int) -> int:
if m==1 or n==1:
return 1
return self.uniquePaths(m-1,n) + self.uniquePaths(m,n-1)
```
​
Using dp
​
```
int uniquePaths(int m, int n) {
vector<vector<int>> dp(m,vector<int>(n,1));
for (int i=1;i<m;i++){
for (int j = 1;j<n;j++){
dp[i][j] = dp[i-1][j] + dp[i][j-1];
}
}
return dp[m-1][n-1];
}
```