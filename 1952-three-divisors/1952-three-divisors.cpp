class Solution {
public:
    bool isThree(int n) {
        if (n==1) return false;
        int cnt = 1;
        for (int i=2;i<=n;i++){
            if (n%i==0){
                cnt++;
            }
            if (cnt>3) return false;
        }
        return cnt==3?true:false;
    }
};