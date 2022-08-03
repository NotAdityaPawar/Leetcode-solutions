class Solution {
public:
    int integerBreak(int n) {
        int ans =1;
        
        if (n==1) return 1;
        if (n==2 or n==3) return n-1;
        
        while (n>4){
            n -= 3;
            ans *= 3;
        }
        
        return n*ans;
    }
};