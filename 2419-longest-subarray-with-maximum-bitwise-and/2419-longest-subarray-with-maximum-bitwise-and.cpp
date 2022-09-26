class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 0;
        int mx = INT_MIN;
        for (auto ele: nums){
            mx = max(ele,mx);
        }
        int cnt = 0;
        for(auto i: nums){
            if (i==mx){
                cnt++;
            }
            else cnt=0;
            ans = max(ans,cnt);
        }
        return ans;
    }
};