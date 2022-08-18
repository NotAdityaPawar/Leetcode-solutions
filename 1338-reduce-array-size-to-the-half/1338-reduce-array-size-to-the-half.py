class Solution:
    def minSetSize(self, arr: List[int]) -> int:
        from collections import Counter
        
        count = Counter(arr)
        ans = 0
        
        count = (dict(sorted(count.items(), key=lambda item: item[1], reverse = True)))
        print(count)
        sum = 0
        
        n = len(arr)
        
        for jey,value in count.items():
            sum += value
            ans+=1
            
            if (sum>=n//2):
                break
                
        return ans