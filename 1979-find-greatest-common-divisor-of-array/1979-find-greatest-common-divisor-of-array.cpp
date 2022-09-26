class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mx = INT_MIN;
        int mn = INT_MAX;
        for (auto ele:nums){
            mx = max(ele,mx);
            mn = min(ele,mn);
        }
        return __gcd(mx,mn);
    }
};