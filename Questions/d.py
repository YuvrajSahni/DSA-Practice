def iterative_deepening_search(graph, start, goal):
    depth = 0
    while True:
        result = depth_limited_search(graph, start, goal, depth)
        if result is not None:
            return result
        depth += 1

def depth_limited_search(graph, start, goal, depth_limit):
    visited = set()
    return dls_recursive(graph, start, goal, depth_limit, visited)

def dls_recursive(graph, node, goal, depth_limit, visited, depth=0):
    if node == goal:
        return [node]

    if depth == depth_limit:
        return None

    visited.add(node)

    for neighbor in graph[node]:
        if neighbor not in visited:
            path = dls_recursive(graph, neighbor, goal, depth_limit, visited, depth + 1)
            if path is not None:
                return [node] + path

    return None

graph = {
    'A': ['B', 'C'],
    'B': ['D', 'E'],
    'C': ['F'],
    'D': [],
    'E': ['F'],
    'F': []
}

start_node = 'A'
goal_node = 'F'

print("Yuvraj Sahni\n21BIT0070\n")

result = iterative_deepening_search(graph, start_node, goal_node)
if result is not None:
    print("Goal node found!")
    print("Path:", result)
else:
    print("Goal node not found.")
