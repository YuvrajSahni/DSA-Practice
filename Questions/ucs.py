import heapq

def uniform_cost_search(graph, start, goal):
    queue = [(0, start)]
    visited = set()
    paths = {start: []}

    while queue:
        current_cost, current_node = heapq.heappop(queue)

        if current_node == goal:
            return current_cost, paths[current_node]

        visited.add(current_node)

        for neighbor, neighbor_cost in graph[current_node].items():
            total_cost = current_cost + neighbor_cost

            if neighbor not in visited:
                heapq.heappush(queue, (total_cost, neighbor))
                paths[neighbor] = paths[current_node] + [neighbor]

    return None, None

graph = {
    'A': {'B': 1, 'C': 4},
    'B': {'D': 3, 'E': 2},
    'C': {'F': 5},
    'D': {'G': 1},
    'E': {'G': 2},
    'F': {},
    'G': {}
}

start_node = 'A'
goal_node = 'G'

print("Yuvraj Sahni\n21BIT0070\n")

cost, path = uniform_cost_search(graph, start_node, goal_node)

if cost is not None:
    path.insert(0, start_node)
    print(f"The cost to reach the goal node from the start node is: {cost}")
    print(f"The path to reach the goal node from the start node is: {path}")
else:
    print("No path found.")
