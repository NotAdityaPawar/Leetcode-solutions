class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long ans = 0;
        unordered_map<int,int> mp;
        int n = nums.size();
        for (int i = 0;i<n;i++){
            ans += i- mp[nums[i] - i]++;
        }
        return ans;
    }
};