class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for (int q: queries){
            int cnt = 0;
            for (int n: nums){
                if (q>=n){
                    q -= n;
                    cnt++;
                }
                else break;
                
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};