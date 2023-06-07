class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for (auto i: bills){
            if (five<0 or ten<0) return false;
            if (i==5) five++;
            else if (i==10) {
                if (five==0) return false;
                five--;
                ten++;
            }
            else {
                if (five>0 and ten>0){
                    five--;
                    ten--;
                }
                else if (five>=3) five-=3;
                else return false;
            }
            
            
        }
        // if (five<0 or ten<0) return false;
        return true;
    }
};