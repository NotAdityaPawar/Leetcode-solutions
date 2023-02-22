class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        graph = {i:[] for i in range(numCourses)}
        indegree = {i:0 for i in range(numCourses)}
        for a,b in prerequisites:
            graph[b].append(a)
            indegree[a] += 1
            
        queue = deque()
        
        for course in range(numCourses):
            if indegree[course]==0:
                queue.append(course)
            
        visited = set()
        while queue:
            front = queue.popleft()
            print(front,end = " ")
            if front in visited:
                continue
            visited.add(front)
            for next_node in graph[front]:
                indegree[next_node] -= 1
                if not indegree[next_node]:
                    queue.append(next_node)
                
        print(graph,indegree)
        print(queue)
        return len(visited)==numCourses
