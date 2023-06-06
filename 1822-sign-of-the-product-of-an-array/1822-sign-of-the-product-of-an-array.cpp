class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long mul = 1;
        for (auto i: nums){
            mul *= i;
            if (mul==0) mul = 0;
            else if (mul<0) mul = -1;
            else mul = 1;
        }
        return mul;
    }
};