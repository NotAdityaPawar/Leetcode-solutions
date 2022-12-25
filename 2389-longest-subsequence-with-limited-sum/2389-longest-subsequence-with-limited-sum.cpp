class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        vector<int> pre(n,0);
        
        sort(nums.begin(),nums.end());
        pre[0] = nums[0];
        for (int i = 1;i<n;i++){
            nums[i] += nums[i-1];
        }
        vector<int> ans;
        for (auto q: queries){
            int i = upper_bound(nums.begin(),nums.end(),q) - nums.begin();
            ans.push_back(i);
        }
        return ans;
    }
};