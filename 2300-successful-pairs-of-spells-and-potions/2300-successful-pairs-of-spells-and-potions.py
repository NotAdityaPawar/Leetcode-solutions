class Solution:
    def successfulPairs(self, spells: List[int], potions: List[int], success: int) -> List[int]:
        ans = []
        n = len(potions)
        potions.sort()
        for spell in spells:
            # temp = [i*spell for i in potions]
            # print(temp)
            
            left = 0
            right = n
            
            while left<right:
                mid = (left+ right)//2
                if potions[mid]*spell<success:
                    left = mid + 1
                    
                else:
                    right = mid
                    
            ans.append(n-left)
                    
        return ans