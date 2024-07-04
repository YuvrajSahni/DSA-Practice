from collections import deque

class Graph:
    def __init__(self, vertices):
        self.V = vertices
        self.adj = [[] for _ in range(vertices)]

    def addEdge(self, u, v):
        self.adj[u].append(v)
        self.adj[v].append(u)  # Uncomment this line for undirected graph

    def BFS(self, startVertex, goalVertex):
        visited = [False] * self.V
        que = deque()
        path = [-1] * self.V

        que.append(startVertex)
        visited[startVertex] = True

        while que:
            v = que.popleft()

            for u in self.adj[v]:
                if not visited[u]:
                    visited[u] = True
                    que.append(u)
                    path[u] = v  # Store parent vertex for path reconstruction

                    if u == goalVertex:
                        print("BFS path from", startVertex, "to", goalVertex, ":", end=" ")
                        self.printPath(path, startVertex, goalVertex)
                        print()
                        return True

        print("No path found.")
        return False

    def printPath(self, path, start, goal):
        result = []
        curr = goal
        while curr != -1:
            result.append(curr)
            curr = path[curr]
        for i in range(len(result) - 1, -1, -1):
            print(result[i], end=" ")

if __name__ == "__main__":
    g = Graph(5)  # Create a graph with 5 vertices
    g.addEdge(0, 1)
    g.addEdge(0, 2)
    g.addEdge(1, 3)
    g.addEdge(1, 4)

    startNode = 0
    goalNode = 4

    print("BFS traversal from", startNode, "to", goalNode, ":")
    foundPath = g.BFS(startNode, goalNode)

    if not foundPath:
        print("No path exists from", startNode, "to", goalNode)