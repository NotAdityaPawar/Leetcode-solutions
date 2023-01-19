class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans = 0;
        int sum =0;
        vector<int> arr(k,0);
        arr[0] =1;
        for (auto i: nums){
            sum = (sum + i%k + k)%k;
            ans += arr[sum];
            arr[sum]++;
        }
        return ans;
    }
};