class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        set<pair<int,int>> s;
        
        int n = nums.size();
        sort(begin(nums),end(nums));
        for (int i = 0;i<n;i++){
            for (int j = i+1;j<n;j++){
                if (abs(nums[i]-nums[j])==k){
                    s.insert(make_pair(nums[i],nums[j]));
                }
            }
        }
        return s.size();
    }
};