class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> arr;
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i =0;i<n;i++){
            if (mp.find(nums[i])!=mp.end()){
                mp[nums[i]] += 1; 
            }
            else {
                mp[nums[i]] =1;
            }
            if (mp[nums[i]]==2){
                arr.push_back(nums[i]);
            }
        }
        return arr;
    }
};