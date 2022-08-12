class Solution {
public:
    bool isPalindrome(int x) {
        int temp  = x;
        if (x<0){
            return false;
        }
        unsigned long long int rev = 0;
        
        while (x){
            int r = x%10;
            rev = rev * 10 + r;
            x/=10;
        }
        cout<<rev;
        return rev==temp;
    }
};