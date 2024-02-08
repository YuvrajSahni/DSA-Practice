from collections import deque

def bidirectional_search(graph, start, goal):
    forward_queue = deque([(start, [start])])
    backward_queue = deque([(goal, [goal])])
    
    forward_visited = set([start])
    backward_visited = set([goal])
    
    while forward_queue and backward_queue:
        node, path = forward_queue.popleft()
        if node == goal:
            return path
        for neighbor in graph[node]:
            if neighbor not in forward_visited:
                forward_queue.append((neighbor, path + [neighbor]))
                forward_visited.add(neighbor)
        
        node, path = backward_queue.popleft()
        if node == start:
            return path
        for neighbor in graph[node]:
            if neighbor not in backward_visited:
                backward_queue.append((neighbor, [neighbor] + path))
                backward_visited.add(neighbor)
    
    return None

graph = {
    'A': ['B', 'C'],
    'B': ['A', 'D'],
    'C': ['A', 'E'],
    'D': ['B', 'E', 'F'],
    'E': ['C', 'D', 'G'],
    'F': ['D'],
    'G': ['E']
}

start_node = 'A'
goal_node = 'G'

print("Yuvraj Sahni\n21BIT0070\n")
path = bidirectional_search(graph, start_node, goal_node)
if path:
    print("Path found:", ' -> '.join(path))
else:
    print("Path not found")
