#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <tuple>
#include <string>
#include <map>
#include "mazes.h"
#include "config.h"
#include "helpers.h"

// Function to solve the maze
std::string solve_maze(const std::vector<std::vector<std::string>>& maze, 
                       const std::pair<int, int>& theseus_start, 
                       const std::pair<int, int>& minotaur_start, 
                       const std::pair<int, int>& exit_pos) {
    std::map<std::string, std::pair<int, int>> directions = {
        {"L", {0, -1}}, {"R", {0, 1}}, {"U", {-1, 0}}, {"D", {1, 0}}, {"S", {0, 0}}
    };
    std::deque<std::tuple<std::pair<int, int>, std::pair<int, int>, std::string>> moves;
    std::set<std::pair<std::pair<int, int>, std::pair<int, int>>> visited;

    moves.push_back(std::make_tuple(theseus_start, minotaur_start, ""));
    visited.insert(std::make_pair(theseus_start, minotaur_start));

    while (!moves.empty()) {
        auto current = moves.front();
        moves.pop_front();
        std::pair<int, int> theseus_pos = std::get<0>(current);
        std::pair<int, int> minotaur_pos = std::get<1>(current);
        std::string path = std::get<2>(current);

        if (theseus_pos == exit_pos) {
            return path;
        }

        if (debug()) {
            std::cout << "Theseus Position: (" << theseus_pos.first << ", " << theseus_pos.second << ")\n";
            std::cout << "Minotaur Position: (" << minotaur_pos.first << ", " << minotaur_pos.second << ")\n";
            std::cout << "Current path: " << path << "\n";
            print_maze(maze, theseus_pos, minotaur_pos, exit_pos);
        }

        for (const auto& direction : directions) {
            std::string move = direction.first;
            auto delta = direction.second;
            auto old_theseus_pos = theseus_pos;
            auto new_theseus_pos = std::make_pair(theseus_pos.first + delta.first, theseus_pos.second + delta.second);

            if (new_theseus_pos.first >= 0 && new_theseus_pos.first < static_cast<int>(maze.size()) &&
                new_theseus_pos.second >= 0 && new_theseus_pos.second < static_cast<int>(maze[0].size()) &&
                can_move(move, maze[old_theseus_pos.first][old_theseus_pos.second])) {

                // Theseus can escape before minotaur moves
                if (new_theseus_pos == exit_pos) {
                    return path + move;
                }

                auto new_minotaur_pos = minotaur_move(maze, minotaur_pos, new_theseus_pos);

                if (new_theseus_pos == new_minotaur_pos) {
                    continue;
                }

                if (visited.find(std::make_pair(new_theseus_pos, new_minotaur_pos)) == visited.end()) {
                    visited.insert(std::make_pair(new_theseus_pos, new_minotaur_pos));
                    moves.push_back(std::make_tuple(new_theseus_pos, new_minotaur_pos, path + move));

                    if (debug()) {
                        std::cout << "Visited positions: " << visited.size() << "\n";
                        std::cout << "Queue size: " << moves.size() << "\n";
                    }
                }
            }
        }
    }

    return "No solution";
}

void print_maze_solution(const std::vector<std::vector<std::string>>& pos, const std::vector<std::vector<std::string>>& maze) {
    auto positions = get_positions(pos);
    std::pair<int, int> theseus_start = std::get<0>(positions);
    std::pair<int, int> minotaur_start = std::get<1>(positions);
    std::pair<int, int> exit_pos = std::get<2>(positions);
    std::string res = solve_maze(maze, theseus_start, minotaur_start, exit_pos);
    std::cout << "Result: " << res << std::endl;
}

void main_func() {
    print_maze_solution(test1_pos, test1);
    print_maze_solution(test2_pos, test2);
    print_maze_solution(test3_pos, test3);
    print_maze_solution(maze1_pos, maze1);
    print_maze_solution(maze2_pos, maze2);
    print_maze_solution(maze3_pos, maze3);
    print_maze_solution(maze4_pos, maze4);
    print_maze_solution(maze5_pos, maze5);
    print_maze_solution(maze6_pos, maze6);
    print_maze_solution(maze7_pos, maze7);
}

int main() {
    set_debug(false);
    timer(main_func);
    return 0;
}
