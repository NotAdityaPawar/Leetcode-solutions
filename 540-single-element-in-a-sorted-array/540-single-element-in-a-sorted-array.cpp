class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for (auto i:nums){
            if (mp.find(i)!=mp.end()){
                mp[i]++;
            }
            else mp[i] = 1;
        }
        
        for (auto i:mp){
            if(i.second==1){
                return i.first;
            }
        }
        return {};
    }
};