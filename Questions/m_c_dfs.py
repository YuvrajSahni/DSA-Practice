def is_valid(state):
    if(state[0] > 3 or state[1] > 3 or state[2] > 1 or state[0] < 0 or state[1] < 0 or state[2] < 0 or (0 < state[0] < state[1]) or (0 < (3 - state[0]) < (3 - state[1]))):
        return False
    else:
        return True

def generate_next_states(missionaries, cannibals, boat):
    moves = [[1, 0, 1], [0, 1, 1], [2, 0, 1], [0, 2, 1], [1, 1, 1]]
    valid_states = []
    for move in moves:
        if(boat == 1):
            next_state = [x1 - x2 for (x1, x2) in zip([missionaries, cannibals, boat], move)]
        else:
            next_state = [x1 + x2 for (x1, x2) in zip([missionaries, cannibals, boat], move)]
        if (is_valid(next_state)):
            valid_states.append(next_state)
    return valid_states

solutions = []
def find_solution(missionaries, cannibals, boat, visited):
    if([missionaries, cannibals, boat] == [0, 0, 0]):
        solutions.append(visited + [[0, 0, 0]])
        return True
    elif([missionaries, cannibals, boat] in visited):
        return False
    else:
        visited.append([missionaries, cannibals, boat])
        for next_state in generate_next_states(missionaries, cannibals, boat):
            find_solution(next_state[0], next_state[1], next_state[2], visited[:])

find_solution(3, 3, 1, [])

print("Yuvraj Sahni\n21BIT0070\n")

solutions.sort()
for solution in solutions:
    print(solution)
