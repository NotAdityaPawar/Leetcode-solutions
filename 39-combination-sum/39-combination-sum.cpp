class Solution {
public:
    void recur(int ind,int target,vector<int>&candidates,vector<vector<int>> &ans,vector<int>&ds){
        if (ind==candidates.size()){
            if (target==0){
                ans.push_back(ds);
            }
            return;
        }
        
        if (candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            recur(ind,target-candidates[ind],candidates,ans,ds);
            ds.pop_back();
        }
        recur(ind+1,target,candidates,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        int n = candidates.size();
        recur(0,target,candidates,ans,ds);
        return ans;
    }
};