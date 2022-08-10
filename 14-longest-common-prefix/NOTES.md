Comparing one by one
​
```
string longesUtil(string a,string b){
string ans = "";
int len = min(a.size(),b.size());
for (int i=0;i<len;i++){
if (a[i]!=b[i]){
break;
}
ans += a[i];
}
return ans;
}
string longestCommonPrefix(vector<string>& strs) {
string prefix = strs[0];
for (int i=1;i<strs.size();i++){
prefix = longesUtil(prefix,strs[i]);
}
return prefix;
}
```