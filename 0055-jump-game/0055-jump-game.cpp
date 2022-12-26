class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = 0;
        int maxreach = 0;
        
        
        while (i<nums.size() and i<=maxreach){
            maxreach = max(maxreach, i+ nums[i]);
            i++;
        }
        return i==nums.size();
    }
};