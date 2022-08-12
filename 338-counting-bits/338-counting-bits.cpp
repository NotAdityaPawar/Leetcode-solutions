class Solution {
public:
    int count(int num){
        int ans = 0;
        while (num){
            ans += num&1;
            num>>=1;
        }
        return ans;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for (int i=0;i<=n;i++){
            ans.push_back(count(i));
        }
        return ans;
    }
};