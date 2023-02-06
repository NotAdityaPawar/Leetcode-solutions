class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        lst = [0]*2*n
        
        
        i = 0
        j = n
        
        cnt = 0
        while cnt<2*n:
            if cnt%2==0:
                lst[cnt] = nums[i]
                i += 1
            else:
                lst[cnt] = nums[j]
                j += 1
                
            cnt += 1
            
        return lst