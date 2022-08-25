class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        for (int i=0;i<magazine.size();i++){
            if (mp.find(magazine[i])!=mp.end()){
                mp[magazine[i]]++;
            }
            else mp[magazine[i]] = 1;
        }
        
        for (int i=0;i<ransomNote.size();i++){
            if (mp.find(ransomNote[i])!=mp.end()){
                mp[ransomNote[i]]--;
            }
            else mp[ransomNote[i]] = -1;
        }
        
        for (auto i: mp){
            if (i.second<0){
                return false;
            }
        }
        return true;
    }
};