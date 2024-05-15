DEBUG = False


def print_maze(maze, theseus_pos, minotaur_pos):
    for i, row in enumerate(maze):
        line = ""
        for j, cell in enumerate(row):
            if (i, j) == theseus_pos:
                line += "T "
            elif (i, j) == minotaur_pos:
                line += "M "
            else:
                line += cell + " "
        print(line)
    print


def minotaur_move(maze, minotaur_pos, theseus_pos):
    x, y = minotaur_pos
    tx, ty = theseus_pos

    for _ in range(2):  # Minotaur moves twice
        if (y < ty and maze[x][y + 1] != "#") or (y > ty and maze[x][y - 1] != "#"):
            y += 1 if y < ty else -1

        elif (x < tx and maze[x + 1][y] != "#") or (x > tx and maze[x - 1][y] != "#"):
            x += 1 if x < tx else -1

    return (x, y)


def solve_maze(maze, theseus_start, minotaur_start, exit_pos):
    from collections import deque

    if (
        maze[theseus_start[0]][theseus_start[1]] == "#"
        or maze[minotaur_start[0]][minotaur_start[1]] == "#"
        or maze[exit_pos[0]][exit_pos[1]] == "#"
    ):
        return "Check input data"

    directions = {"L": (0, -1), "R": (0, 1), "U": (-1, 0), "D": (1, 0), "S": (0, 0)}
    moves = deque([(theseus_start, minotaur_start, "")])

    visited = set()
    visited.add((theseus_start, minotaur_start))

    while moves:
        theseus_pos, minotaur_pos, path = moves.popleft()

        if theseus_pos == exit_pos:
            return path

        if DEBUG:
            print("Current path:", path)
            print_maze(maze, theseus_pos, minotaur_pos)

        for move, (dx, dy) in directions.items():
            new_theseus_pos = (theseus_pos[0] + dx, theseus_pos[1] + dy)
            if (
                0 <= new_theseus_pos[0] < len(maze)
                and 0 <= new_theseus_pos[1] < len(maze[0])
                and maze[new_theseus_pos[0]][new_theseus_pos[1]] != "#"
            ):

                new_minotaur_pos = minotaur_move(maze, minotaur_pos, new_theseus_pos)

                if new_theseus_pos == new_minotaur_pos:
                    continue

                if (new_theseus_pos, new_minotaur_pos) not in visited:
                    visited.add((new_theseus_pos, new_minotaur_pos))
                    moves.append((new_theseus_pos, new_minotaur_pos, path + move))

    return "No solution"


def find_minotaur(maze):
    for i in range(len(maze)):
        for j in range(len(maze[0])):
            if maze[i][j] == "M":
                return (i, j)
    return None


def find_theseus(maze):
    for i in range(len(maze)):
        for j in range(len(maze[0])):
            if maze[i][j] == "T":
                return (i, j)
    return None


def find_exit(maze):
    for i in range(len(maze)):
        for j in range(len(maze[0])):
            if maze[i][j] == "E":
                return (i, j)
    return None


def set_debug_mode(debug: bool) -> None:
    global DEBUG
    DEBUG = debug


def main():

    maze_pos = [
        ["#", "#", "#", "#", "#", "#"],
        ["#", " ", " ", "M", " ", "#"],
        ["#", " ", "#", "#", " ", "#"],
        ["#", " ", " ", "#", " ", "E"],
        ["#", " ", "#", "#", " ", "#"],
        ["#", " ", " ", "T", " ", "#"],
        ["#", "#", "#", "#", "#", "#"],
    ]

    maze = [
        ["#", "#", "#", "#", "#", "#"],
        ["#", " ", " ", " ", " ", "#"],
        ["#", " ", "#", "#", " ", "#"],
        ["#", " ", " ", "#", " ", "E"],
        ["#", " ", "#", "#", " ", "#"],
        ["#", " ", " ", " ", " ", "#"],
        ["#", "#", "#", "#", "#", "#"],
    ]

    theseus_start = find_theseus(maze_pos)
    minotaur_start = find_minotaur(maze_pos)
    exit_pos = find_exit(maze_pos)
    res = solve_maze(maze, theseus_start, minotaur_start, exit_pos)
    print(res)


if __name__ == "__main__":
    set_debug_mode(True)
    main()
