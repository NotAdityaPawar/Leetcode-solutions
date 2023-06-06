class Solution {
public:
    int isincreasing(vector<int>&nums){
        int n = nums.size();
        for (int i=1;i<n;i++){
            if (nums[i]<nums[i-1]) return false;
        }
        return true;
    }
    int isdecreasing(vector<int>&nums){
        int n = nums.size();
        for (int i  =1;i<n;i++){
            if (nums[i]>nums[i-1]) return false;
        }
        return true;
    }
    bool isMonotonic(vector<int>& nums) {
        return isincreasing(nums) || isdecreasing(nums);
    }
    
};