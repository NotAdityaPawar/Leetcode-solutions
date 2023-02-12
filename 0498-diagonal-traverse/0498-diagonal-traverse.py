class Solution:
    def findDiagonalOrder(self, mat: List[List[int]]) -> List[int]:
        m = len(mat)
        n = len(mat[0])
        nums = {i:[] for i in range((m-1)+(n-1)+1)}
        
        for i in range(m-1,-1,-1):
            for j in range(n):
                nums[i+j].append(mat[i][j])
                
        ans = []  
        for i in nums.keys():
            if i%2==0:
                for j in nums[i]:
                    ans.append(j)
                    
            else:
                for j in nums[i][::-1]:
                    ans.append(j)
        print(ans)
        return ans
                