class Solution:
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        seen = [False for _ in range(len(rooms))]
        seen[0] = True
        
        stack = [0]
        
        
        while stack:
            top  = stack.pop()
            
            for node in rooms[top]:
                if not seen[node]:
                    stack.append(node)
                    seen[node] = True
                    
        
        return all(seen)
        