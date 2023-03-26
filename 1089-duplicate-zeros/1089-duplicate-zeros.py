class Solution:
    def duplicateZeros(self, arr: List[int]) -> None:
        """
        Do not return anything, modify arr in-place instead.
        """
        temp = []
        for i in arr:
            if i != 0:
                temp.append(i)
                
            else:
                temp.append(0)
                temp.append(0)
                
                
        cnt = 0
        
        while cnt<len(arr):
            arr[cnt] = temp[cnt]
            cnt += 1
            
            