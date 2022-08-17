Using the memoization
​
```
int helper(string a,string b,int m,int n,vector<vector<int>> &dp){
if (m==0){
return n;
}
if (n==0){
return m;
}
if (dp[m][n]!=-1){
return dp[m][n];
}
if (a[m-1]==b[n-1]){
return dp[m][n] = helper(a,b,m-1,n-1,dp);
}
else{
return dp[m][n] =  1 + min(helper(a,b,m-1,n,dp),min(helper(a,b,m-1,n-1,dp),helper(a,b,m,n-1,dp)));
}
}
int minDistance(string word1, string word2) {
int m = word1.size();
int n = word2.size();
vector<vector<int>> dp(m+1,vector<int> (n+1,-1));
return helper(word1,word2,m,n,dp);
}
```
​
Using the recursive solution
```
int helper(string a,string b,int m,int n){
if (m==0){
return n;
}
if (n==0){
return m;
}