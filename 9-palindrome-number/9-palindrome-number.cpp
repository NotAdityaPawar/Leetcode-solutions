class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        unsigned long long temp = x;
        unsigned long long sum = 0;
        while (temp){
            sum = sum *10 + temp%10;
            temp/=10;
        }
        cout<<sum<<" "<<x;
        if (sum==x) return true;
        return false;
    }
};