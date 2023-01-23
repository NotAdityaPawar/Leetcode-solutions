class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int ans = -1;
        unordered_map<int,int> mp;
        for (int i = 1;i<=n;i++){
            mp[i] = 0;
        }
        for (auto &t:trust){
            int a = t[0];
            int b = t[1];
            mp[b]++;
            mp[a]--;
        }
        int mx = INT_MIN;
        
        for (auto i: mp){
            if (i.second >-1 and i.second==n-1){
                ans = i.first;
            }
        }
        return ans;
    }
};