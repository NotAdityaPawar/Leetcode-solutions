class Solution:
    def average(self, salary: List[int]) -> float:
        mi = min(salary)
        ma = max(salary)
        
        s = 0
        cnt = 0
        for i in salary:
            if i==mi or i==ma:
                continue
            s += i
            cnt += 1
            
        return s/cnt