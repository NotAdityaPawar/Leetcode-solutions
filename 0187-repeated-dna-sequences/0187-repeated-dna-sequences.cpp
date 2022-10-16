class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if (s.size()<10){
            return {};
        }
        unordered_map<string,int> mp;
        vector<string> ans;
        
        int i =0;
        int j = 9;
        
        while (i<s.size()-10+1){
            string temp = s.substr(i,10);
            if (mp.find(temp)!=mp.end()){
                mp[temp]++;
            }
            else mp[temp] = 1;
            i++;
        }
        
        for (auto i:mp){
            if (i.second>1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};