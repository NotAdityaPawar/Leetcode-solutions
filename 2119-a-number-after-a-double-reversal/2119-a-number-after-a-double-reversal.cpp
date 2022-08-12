class Solution {
public:
    bool isSameAfterReversals(int num) {
        int a = num;
        int rev = 0;
        while (num){
            int temp = num%10;
            rev = rev *10 + temp;
            num /=10;
        }
        
        int rev2 = 0;
        while (rev){
            int temp = rev%10;
            rev2 = rev2*10 + temp;
            rev/=10;
        }
        if (a==rev2){
            return true;
        }
        return false;
        
    }
};