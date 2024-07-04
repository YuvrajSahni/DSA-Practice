queue = []
visited=[]

graph = {
    'A': ['B', 'C', 'G'],
    'B': ['D', 'E'],
    'C': ['B', 'F'],
    'D': [],
    'E': [],
    'F': [],
    'G': []
}

def bfs(graph, start, goal):
    current = start
    
    queue.append(current)
    
    while len(queue) > 0:
        current = queue.pop(0)
        
        if current in visited:
            continue
        else:
            visited.append(current)
            
        if current == goal:
            return True
            
        for child in graph[current]:
            queue.append(child)
    
    return False

print("Nupur Shah\n21BIT0489\n")
print(bfs(graph, 'A','G'))
print(visited)
