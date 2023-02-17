class Solution:
    def groupThePeople(self, groupSizes: List[int]) -> List[List[int]]:
        ans = []
        
        mp = defaultdict(list)
        
        for val,i in enumerate(groupSizes):
            mp[i].append(val)
        print(mp)
        
        for s,l in mp.items():
            for i in range(0,len(l),s):
                ans.append(l[i:i+s])
                
        return ans