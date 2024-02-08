from collections import deque

def water_jug_problem(capacity1, capacity2, target):
    visited = set()
    queue = deque([(0, 0, [])])

    while queue:
        jug1, jug2, path = queue.popleft()

        if jug1 == target or jug2 == target:
            return path

        if (jug1, jug2) in visited:
            continue

        visited.add((jug1, jug2))

        queue.append((capacity1, jug2, path + ['Fill jug1']))
        queue.append((jug1, capacity2, path + ['Fill jug2']))
        queue.append((0, jug2, path + ['Empty jug1']))
        queue.append((jug1, 0, path + ['Empty jug2']))

        pour_amount = min(jug1, capacity2 - jug2)
        queue.append((jug1 - pour_amount, jug2 + pour_amount, path + ['Pour jug1 to jug2']))

        pour_amount = min(jug2, capacity1 - jug1)
        queue.append((jug1 + pour_amount, jug2 - pour_amount, path + ['Pour jug2 to jug1']))

    return None

capacity_jug1 = 5
capacity_jug2 = 3
target_liters = 4

print("Yuvraj Sahni\n21BIT0070\n")

path = water_jug_problem(capacity_jug1, capacity_jug2, target_liters)
if path:
    print('Steps to measure', target_liters, 'liters:')
    for step, action in enumerate(path, start=1):
        print(f"Step {step}: {action}")
else:
    print('Target cannot be achieved.')
