use the kadanne's algorithm **Must do it**
increase this counter after doing it **+4**
​
​
```
class Solution:
def maxProfit(self, prices: List[int]) -> int:
ans = 0
maxcur = 0
for i in range(1,len(prices)):
maxcur += prices[i]-prices[i-1]
maxcur = max(0,maxcur)
ans = max(ans,maxcur)
return ans
```
2. Using the Greedy Approach to calculate the minprice and maxprofit
```
int maxProfit(vector<int>& prices) {
int maxProfit = 0;
int minPrice = INT_MAX;
for(int i=0;i<prices.size();i++){
minPrice = min(prices[i],minPrice);
maxProfit = max(maxProfit,prices[i]-minPrice);
}
return maxProfit;
}
```