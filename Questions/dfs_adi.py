from collections import defaultdict

class Graph:
    def __init__(self, vertices):
        self.V = vertices
        self.adj = defaultdict(list)

    def addEdge(self, u, v):
        self.adj[u].append(v)
        self.adj[v].append(u)  # Uncomment this line for undirected graph

    def DFS(self, startVertex, goalVertex):
        visited = [False] * self.V
        stk = []
        path = []

        stk.append(startVertex)

        while stk:
            v = stk.pop()

            if not visited[v]:
                visited[v] = True
                path.append(v)

                if v == goalVertex:
                    print(f"DFS path from {startVertex} to {goalVertex}: {' '.join(map(str, path))}")
                    return True

                for u in self.adj[v]:
                    if not visited[u]:
                        stk.append(u)

        print("No path found.")
        return False

if __name__ == "__main__":
    g = Graph(5)  # Create a graph with 5 vertices
    g.addEdge(0, 1)
    g.addEdge(0, 2)
    g.addEdge(1, 3)
    g.addEdge(1, 4)

    startNode = 0
    goalNode = 4

    print(f"DFS traversal from {startNode} to {goalNode}:")
    foundPath = g.DFS(startNode, goalNode)

    if not foundPath:
        print(f"No path exists from {startNode} to {goalNode}")