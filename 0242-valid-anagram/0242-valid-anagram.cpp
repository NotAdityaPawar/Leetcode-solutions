class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        unordered_map<char,int> mp;
        
        for (auto i:s){
            if (mp.find(i)!=mp.end()){
                mp[i]++;
            }
            else mp[i] = 1;
        }
        
        for (auto i:t){
            if (mp.find(i)==mp.end()) return false;
            else {
                mp[i]--;
            }
            if (mp[i]<0) return false;
        }
        return true;
    }
};