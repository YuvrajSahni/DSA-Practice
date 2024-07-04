import itertools

def calculate_total_distance (order, distances):
    total_distance = 0
    for i in range(len(order)-1):
        total_distance += distances[order[i]][order[i+1]]

    total_distance += distances[order[-1]][order[0]]
    
    return total_distance

def traveling_salesman_bruteforce(distances):
    num_cities = len(distances)
    cities = list(range(num_cities))
    
    all_orders = list(itertools.permutations (cities))
    
    best_order =None
    best_distance = float('inf')
    
    for order in all_orders:
        current_distance=calculate_total_distance(order, distances)
        if current_distance < best_distance:
            best_distance = current_distance
            best_order = order
            
    return best_order, best_distance

distances = [
    [0, 1, 5, 2],
    [10, 0, 3, 5],
    [3, 8, 0, 30],
    [23, 5, 3, 0]
]

best_order, best_distance = traveling_salesman_bruteforce(distances)

print("Best order:", best_order)
print("Best distance:", best_distance)

print("\nYuvraj Sahni\n21BIT0070\n")