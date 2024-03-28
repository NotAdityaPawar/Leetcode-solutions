class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count  = 0;
        int pro = 1;
        
        if (k<=1) return 0;
        
        for (int left = 0, right = 0;right<nums.size();right++){
            pro *= nums[right];
            
            while (pro>=k){
                pro /= nums[left];
                left ++;
            }
            count += right - left + 1;
        }
        return count;
    }
};