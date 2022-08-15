class Solution {
public:
    bool canJump(vector<int>& nums) {
        int ans = 0;
        
        for (int i=nums.size()-2;i>=0;i--){
            ans++;
            if (nums[i]>=ans){
                ans = 0;
            }
        }
        return ans==0;
    }
};