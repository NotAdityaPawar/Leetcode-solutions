class Solution:
    def findSmallestSetOfVertices(self, n: int, edges: List[List[int]]) -> List[int]:

        graph = {i:[] for i in range(n)}


        res = {i:[] for i in range(n)}

        for u,v in edges:
            graph[u].append(v)

        #print(graph)
        incoming = set()
        for i in range(n):
            visited = set()
            temp = []
            queue = deque()

            queue.append(i)

            while queue:
                node = queue.popleft()
                for next_node in graph[node]:
                    if next_node not in visited:
                        visited.add(next_node)
                        queue.append(next_node)

                    temp.append(next_node)
                    incoming.add(next_node)
                    res[i].append(next_node)
        
        #d1 = dict(sorted(d.items(), key = lambda x:x[0]))
        #res = dict(sorted(res.items(),key = lambda x:len(x[1]), reverse = True))
        ans = []
        print("n is ",n)
        for i in range(n):
            if i not in (incoming):
                print(i)
                ans.append(i)
        print(incoming)
        #print(res)
        return ans