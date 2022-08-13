class Solution {
    vector<vector<int>> ans;
public:
    void helper(vector<int> nums,int l, int r){
        if (l==r){
            ans.push_back(nums);
        }
        for (int i=l;i<=r;i++){
            swap(nums[l],nums[i]);
            helper(nums,l+1,r);
            swap(nums[l],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        helper(nums,0,nums.size()-1);
        return ans;
    }
};