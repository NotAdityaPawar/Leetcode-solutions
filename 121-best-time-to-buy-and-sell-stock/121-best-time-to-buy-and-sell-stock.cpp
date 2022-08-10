class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int profit = 0;
        int least_so_far = INT_MAX;
        for (int i=0;i<prices.size();i++){
            if (prices[i]<least_so_far){
                least_so_far = prices[i];
            }
            profit = prices[i]- least_so_far;
            ans = max(ans,profit);
        }
        return ans;
    }
};