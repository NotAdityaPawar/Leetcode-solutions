Using the Counter in Python
​
```
class Solution:
def minSetSize(self, arr: List[int]) -> int:
from collections import Counter
count = Counter(arr)
ans = 0
count = (dict(sorted(count.items(), key=lambda item: item[1], reverse = True)))
print(count)
sum = 0
n = len(arr)
for jey,value in count.items():
sum += value
ans+=1
if (sum>=n//2):
break
return ans
```
​
Using custom build compare function
​
```
static int comp(pair<int,int> a,pair<int,int> b){
return a.second>b.second;
}
int minSetSize(vector<int>& arr) {
unordered_map<int,int> mp;
for (auto i:arr){
if (mp.find(i)!=mp.end()){
mp[i]++;
}
else mp[i] = 1;
}
vector<pair<int,int>> v(mp.begin(),mp.end());
sort(v.begin(),v.end(),comp);
int ans = 0;
int sum = 0;
int n = arr.size();
for (int i=0;i<v.size();i++){
cout<<v[i].first<<endl;;