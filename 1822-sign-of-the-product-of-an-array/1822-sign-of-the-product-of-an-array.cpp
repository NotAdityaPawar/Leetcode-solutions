class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long pro = 1;
        
        for (auto i: nums){
            if (i==0) return 0;
            else if (i>1 and pro==1) pro = 1;
            else if(i>1 and pro==-1) pro = -1;
            else if (i<1 and pro==1) pro = -1;
            else pro = 1;
        }
        if (pro==0) return 0;
        if (pro==1) return 1;
        return -1;
    }
};