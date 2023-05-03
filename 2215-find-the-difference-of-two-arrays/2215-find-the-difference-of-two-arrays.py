class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        lst1 = []
        
        for i in nums1:
            if i not in nums2:
                lst1.append(i)
                
                
        lst2 = []
        
        for i in nums2:
            if i not in nums1:
                lst2.append(i)
                
        return [set(lst1),set(lst2)]