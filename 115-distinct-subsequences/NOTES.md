Using the recursion TLE
​
```
int helper(string s,string t,int i,int j){
if (j<0) return 1;
if (i<0) return 0;
if (s[i]==t[j]){
return helper(s,t,i-1,j-1) + helper(s,t,i-1,j);
}
else{
return helper(s,t,i-1,j);
}
}
int numDistinct(string s, string t) {
int m = s.size();
int n = t.size();
return helper(s,t,m-1,n-1);
}
```