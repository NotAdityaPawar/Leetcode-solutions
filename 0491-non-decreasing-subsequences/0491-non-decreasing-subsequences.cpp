class Solution {
public:
    void func(int ind,vector<int>&nums,vector<int> &temp, set<vector<int>>&ans){
        int n = nums.size();
        if (ind>=n){
            if (temp.size()>=2){
                ans.insert(temp);
            }
            return;
        }
        
        if (!temp.size() or nums[ind]>=temp.back()){
            temp.push_back(nums[ind]);
            func(ind +1,nums,temp,ans);
            temp.pop_back();
        }
        func(ind+1,nums,temp,ans);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> ans;
        
        vector<int> temp;
        func(0,nums,temp,ans);
        return vector(ans.begin(),ans.end());
    }
};