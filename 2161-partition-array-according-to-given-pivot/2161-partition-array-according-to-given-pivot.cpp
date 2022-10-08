class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> l1,l2,l3;
        
        for (auto i: nums){
            if (i<pivot){
                l1.emplace_back(i);
            }
            else if (i==pivot) l2.emplace_back(i);
            else l3.emplace_back(i);
        }
        
        //sort(l1.begin(),l1.end(),greater<int>());
        //sort(l3.begin(),l3.end());
        
        vector<int> ans;
        for (auto i: l1){
            ans.emplace_back(i);
        }
        for (auto i: l2){
            ans.emplace_back(i);
        }
        for (auto i: l3){
            ans.emplace_back(i);
        }
        return ans;
        
    }
};