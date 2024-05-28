#ifndef HELPERS_H
#define HELPERS_H

#include <vector>
#include <string>
#include <utility> // for std::pair
#include <tuple>   // for std::tuple
#include <chrono>
#include <iostream>

std::pair<int, int> find_minotaur(const std::vector<std::vector<std::string>> &maze);
std::pair<int, int> find_theseus(const std::vector<std::vector<std::string>> &maze);
std::pair<int, int> find_exit(const std::vector<std::vector<std::string>> &maze);
std::tuple<std::pair<int, int>, std::pair<int, int>, std::pair<int, int>> get_positions(const std::vector<std::vector<std::string>> &maze);
void print_maze(const std::vector<std::vector<std::string>> &maze, const std::pair<int, int> &theseus_pos, const std::pair<int, int> &minotaur_pos, const std::pair<int, int> &exit_pos);
bool can_move(const std::string &direction, const std::string &cell_contents);
std::pair<int, int> minotaur_move(const std::vector<std::vector<std::string>> &maze, const std::pair<int, int> &minotaur_pos, const std::pair<int, int> &theseus_pos);

template <typename Func>
void timer(Func func)
{
    auto start = std::chrono::high_resolution_clock::now();
    func();
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Execution time: " << duration.count() << " seconds" << std::endl;
}

#endif // HELPERS_H
