class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        pro = 1
        s = 0
        while n:
            r = n%10
            pro*=r
            s+=r
            n//=10
            
        return pro-s