class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        
        def counting_sort():
            counts = {}
            minVal = min(nums)
            maxVal = max(nums)

            for num in nums:
                counts[num] = counts.get(num,0) + 1

            index = 0

            for val in range(minVal,maxVal+1,1):
                while counts.get(val,0)>0:
                    nums[index] = val
                    index += 1

                    counts[val] -= 1
                    
            
        counting_sort()
        return nums
                
        