class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res;
        unordered_map<char,int> mp;
        
        for(int i=0;i<s.size();i++){
            mp[s[i]] = i;
        }
        int maxi = 0;
        int prev = -1;
        for(int i=0;i<s.size();i++){
            maxi = max(mp[s[i]],maxi);
            if (maxi==i){
                res.push_back(maxi-prev);
                prev = maxi;
            }
        }
        return res;
    }
};