class Solution {
public:
    int climbStairs(int n) {
        if (n==0) return 0;
        if (n==1) return 1;
        
        
        vector<int> fib(n+1,0);
        fib[0] = 1;
        fib[1] = 1;
        for (int i=2;i<=n;i++){
            fib[i] = fib[i-1] + fib[i-2];
        }
        return fib[n];
    }
};