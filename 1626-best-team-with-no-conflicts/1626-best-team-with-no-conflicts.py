class Solution:
    def bestTeamScore(self, scores: List[int], ages: List[int]) -> int:
        dp = [0]* (1+max(ages))
        
        lst = sorted(zip(scores,ages))
        
        
        for score, age in lst:
            dp[age] = score + max(dp[:age+1])
        
        print(dp)
        return max(dp)