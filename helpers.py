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


def get_positions(maze):
    return find_theseus(maze), find_minotaur(maze), find_exit(maze)


def print_maze(maze, theseus_pos, minotaur_pos, exit_pos):
    for i, row in enumerate(maze):
        line = ""
        for j, cell in enumerate(row):
            if (i, j) == theseus_pos:
                line += "T "
            elif (i, j) == minotaur_pos:
                line += "M "
            elif (i, j) == exit_pos:
                line += "E"
            else:
                line += "_ "
        print(line)
    print("\n")


def can_move(direction, cell_contents):
    return direction in cell_contents or direction == "S"


def minotaur_move(maze, minotaur_pos, theseus_pos):
    x, y = minotaur_pos
    tx, ty = theseus_pos

    for _ in range(2):
        if (y < ty and can_move("R", maze[x][y])) or (
            y > ty and can_move("L", maze[x][y])
        ):
            y += 1 if y < ty else -1
        elif (x < tx and can_move("D", maze[x][y])) or (
            x > tx and can_move("U", maze[x][y])
        ):
            x += 1 if x < tx else -1

    return (x, y)
