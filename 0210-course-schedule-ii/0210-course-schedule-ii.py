class Solution:
    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:
        result = []
        graph = {i:[] for i in range(numCourses)}
        indegree = {i:0 for i in range(numCourses)}
        
        for u,v in prerequisites:
            indegree[u] += 1
            graph[v].append(u)
        
        
        queue = deque()
        
        for i in range(numCourses):
            if indegree[i]==0:
                queue.append(i)
            
            
        visited = set()
        while queue:
            front = queue.popleft()
            if front in visited:
                continue
            result.append(front)
            visited.add(front)
                
            for next_node in graph[front]:
                indegree[next_node] -= 1
                if not indegree[next_node]:
                    queue.append(next_node)
            
        if len(visited)!=numCourses:
            return []
        return result