Using the recursive solution
```
int helper(string a,string b,int m,int n){
if (m==0){
return n;
}
if (n==0){
return m;
}
if (a[m-1]==b[n-1]){
return helper(a,b,m-1,n-1);
}
else{
return 1 + min(helper(a,b,m-1,n),min(helper(a,b,m-1,n-1),helper(a,b,m,n-1)));
}
}
int minDistance(string word1, string word2) {
int m = word1.size();
int n = word2.size();
return helper(word1,word2,m,n);
}
```
​