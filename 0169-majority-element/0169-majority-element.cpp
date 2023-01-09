class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = -1;
        
        for (auto i:nums){
            if (count==0){
                candidate = i;
            }
            count += (i==candidate?1:-1);
        }
        
        return candidate;
    }
};