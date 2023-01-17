class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int ans = 0;
        int cnt = 0;
        for (auto i: s){
            if (i=='1')
                cnt++;
            else ans++;
            
            ans = min(ans,cnt);
        }
        return ans;
    }
};