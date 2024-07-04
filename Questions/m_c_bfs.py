from collections import deque

def is_valid_state(state):
    missionaries, cannibals, boat = state
    if missionaries < 0 or cannibals < 0 or missionaries > 3 or cannibals > 3:
        return False
    if missionaries < cannibals and missionaries > 0:
        return False
    if missionaries > cannibals and missionaries < 3:
        return False
    return True

def is_goal_state(state):
    return state == (0, 0, 0)

def get_next_states(state):
    states = []
    missionaries, cannibals, boat = state

    if boat == 1:
        for i in range(3):
            for j in range(3):
                if i + j <= 2 and i + j > 0:
                    new_state = (missionaries - i, cannibals - j, 0)
                    if is_valid_state(new_state):
                        states.append(new_state)
    else:
        for i in range(3):
            for j in range(3):
                if i + j <= 2 and i + j > 0:
                    new_state = (missionaries + i, cannibals + j, 1)
                    if is_valid_state(new_state):
                        states.append(new_state)

    return states

def bfs():
    start_state = (3, 3, 1)
    visited = set()
    queue = deque([(start_state, [])])

    while queue:
        state, path = queue.popleft()
        if is_goal_state(state):
            return path
        if state not in visited:
            visited.add(state)
            for next_state in get_next_states(state):
                queue.append((next_state, path + [next_state]))

    return None

print("Yuvraj Sahni\n21BIT0070\n")

solution = bfs()
if solution:
    print("Solution found:")
    for step, state in enumerate(solution):
        print(f"Step {step + 1}: {state}")
else:
    print("No solution found.")
