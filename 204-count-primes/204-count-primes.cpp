class Solution {
public:
    int countPrimes(int n) {
        
        if (n==0 or n==1){
            return 0;
        }
        bool isPrime[n];
        for (int i=2;i<n;i++){
            isPrime[i] = true;
        }
        
        for(int i =2;i*i<n;i++){
            if (!isPrime[i]) continue;
            for (int j = i*i;j<n;j+=i){
                isPrime[j] = false;
            }
        }
        int ans= 0;
        
        for (int i=2;i<n;i++){
            if(isPrime[i]) ans ++;
        }
        return ans;
    }
};