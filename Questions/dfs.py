visited = []

graph = {
    'A': ['B', 'C', 'G'],
    'B': ['D', 'E'],
    'C': ['B', 'F'],
    'D': [],
    'E': [],
    'F': [],
    'G': []
}

def dfs(graph, start, goal):
    
    if start in visited:
        return False
    
    visited.append(start)
    
    if start == goal:
        return True

    
    for child in graph[start]:
        if dfs(graph, child, goal):
            return True
    return False

print("Nupur Shah\n21BIT0489\n")
print(dfs(graph, 'A', 'G'))
print(visited)
