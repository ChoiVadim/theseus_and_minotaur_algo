from collections import deque

from mazes import *
from config import *
from helpers import *


def solve_maze(maze, theseus_start, minotaur_start, exit_pos):
    directions = {"L": (0, -1), "R": (0, 1), "U": (-1, 0), "D": (1, 0), "S": (0, 0)}
    moves = deque([(theseus_start, minotaur_start, "")])
    visited = set()
    visited.add((theseus_start, minotaur_start))

    while moves:
        theseus_pos, minotaur_pos, path = moves.popleft()

        if theseus_pos == exit_pos:
            return path

        if debug():
            print(f"{theseus_pos=}, {minotaur_pos}")
            print("Current path:", path)
            print_maze(maze, theseus_pos, minotaur_pos, exit_pos)

        for move, (dx, dy) in directions.items():
            old_theseus_pos = theseus_pos
            new_theseus_pos = (theseus_pos[0] + dx, theseus_pos[1] + dy)

            if (
                0 <= new_theseus_pos[0] < len(maze)
                and 0 <= new_theseus_pos[1] < len(maze[0])
                and can_move(move, maze[old_theseus_pos[0]][old_theseus_pos[1]])
            ):

                # Theseus can escape before minotaur moves
                if new_theseus_pos == exit_pos:
                    return path + move

                new_minotaur_pos = minotaur_move(maze, minotaur_pos, new_theseus_pos)

                if new_theseus_pos == new_minotaur_pos:
                    continue

                if (new_theseus_pos, new_minotaur_pos) not in visited:
                    visited.add((new_theseus_pos, new_minotaur_pos))
                    moves.append((new_theseus_pos, new_minotaur_pos, path + move))

                    if debug():
                        print(f"{visited=}")
                        print(f"{moves=}")

    return "No solution"

def print_maze_solution(pos, maze):
    theseus_start, minotaur_start, exit_pos = get_positions(pos)
    res = solve_maze(maze, theseus_start, minotaur_start, exit_pos)
    print(f"Result: {res}")
    return res

@timer
def main():
    print_maze_solution(test1_pos, test1)
    print_maze_solution(test2_pos, test2)
    print_maze_solution(test3_pos, test3)
    print_maze_solution(maze1_pos, maze1)
    print_maze_solution(maze2_pos, maze2)
    print_maze_solution(maze3_pos, maze3)
    print_maze_solution(maze4_pos, maze4)
    print_maze_solution(maze5_pos, maze5)
    print_maze_solution(maze6_pos, maze6)
    print_maze_solution(maze7_pos, maze7)

if __name__ == "__main__":
    set_debug(False)
    main()
