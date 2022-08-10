Using the unordered map
​
```
vector<vector<string>> groupAnagrams(vector<string>& strs) {
unordered_map<string, vector<string>> mp;
vector<vector<string>> anagram;
for (string s: strs){
string t = s;
sort(t.begin(),t.end());
mp[t].push_back(s);
}
for (auto p: mp){
anagram.push_back(p.second);
}
return anagram;
}
```