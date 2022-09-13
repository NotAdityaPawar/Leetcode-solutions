class Solution {
public:
    string convertToBase7(int num) {
        if (num==0){
            return "0";
        }
        int temp = num;
        string op = "";
        if (temp<0){
            op += "-";
            num *=-1;
        }
        
        
        string ans = "";
        while (num){
            int r = num%7;
            ans += to_string(r);
            num /= 7;
        }
        reverse(ans.begin(),ans.end());
        
        return op + ans;
    }
};