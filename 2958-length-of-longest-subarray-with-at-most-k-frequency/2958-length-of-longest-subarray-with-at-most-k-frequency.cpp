class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans =0;
        unordered_map<int,int> mp;
        int start = -1;
        
        for (int end = 0;end<nums.size();end++){
            mp[nums[end]]++;
            
            while (mp[nums[end]]>k){
                start ++;
                mp[nums[start]]--;
            }
            
            ans = max(ans,end-start);
        }
        
        return ans;
    }
};