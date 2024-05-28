#include "helpers.h"
#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <ctime>
#include <chrono>

// Find the position of the Minotaur
std::pair<int, int> find_minotaur(const std::vector<std::vector<std::string>> &maze)
{
    for (int i = 0; i < static_cast<int>(maze.size()); ++i)
    {
        for (int j = 0; j < static_cast<int>(maze[0].size()); ++j)
        {
            if (maze[i][j] == "M")
            {
                return std::make_pair(i, j);
            }
        }
    }
    return std::make_pair(-1, -1);
}

// Find the position of Theseus
std::pair<int, int> find_theseus(const std::vector<std::vector<std::string>> &maze)
{
    for (int i = 0; i < static_cast<int>(maze.size()); ++i)
    {
        for (int j = 0; j < static_cast<int>(maze[0].size()); ++j)
        {
            if (maze[i][j] == "T")
            {
                return std::make_pair(i, j);
            }
        }
    }
    return std::make_pair(-1, -1);
}

// Find the position of the exit
std::pair<int, int> find_exit(const std::vector<std::vector<std::string>> &maze)
{
    for (int i = 0; i < static_cast<int>(maze.size()); ++i)
    {
        for (int j = 0; j < static_cast<int>(maze[0].size()); ++j)
        {
            if (maze[i][j] == "E")
            {
                return std::make_pair(i, j);
            }
        }
    }
    return std::make_pair(-1, -1);
}

// Get all important positions in the maze
std::tuple<std::pair<int, int>, std::pair<int, int>, std::pair<int, int>> get_positions(const std::vector<std::vector<std::string>> &maze)
{
    auto theseus_pos = find_theseus(maze);
    auto minotaur_pos = find_minotaur(maze);
    auto exit_pos = find_exit(maze);
    return std::make_tuple(theseus_pos, minotaur_pos, exit_pos);
}

// Print the maze with the current positions of Theseus, Minotaur, and the exit
void print_maze(const std::vector<std::vector<std::string>> &maze, const std::pair<int, int> &theseus_pos, const std::pair<int, int> &minotaur_pos, const std::pair<int, int> &exit_pos)
{
    for (int i = 0; i < static_cast<int>(maze.size()); ++i)
    {
        std::string line;
        for (int j = 0; j < static_cast<int>(maze[0].size()); ++j)
        {
            if (std::make_pair(i, j) == theseus_pos)
            {
                line += "T ";
            }
            else if (std::make_pair(i, j) == minotaur_pos)
            {
                line += "M ";
            }
            else if (std::make_pair(i, j) == exit_pos)
            {
                line += "E ";
            }
            else
            {
                line += "_ ";
            }
        }
        std::cout << line << std::endl;
    }
    std::cout << std::endl;
}

// Check if Theseus can move in the given direction
bool can_move(const std::string &direction, const std::string &cell_contents)
{
    return cell_contents.find(direction) != std::string::npos || direction == "S";
}

// Calculate the Minotaur's move
std::pair<int, int> minotaur_move(const std::vector<std::vector<std::string>> &maze, const std::pair<int, int> &minotaur_pos, const std::pair<int, int> &theseus_pos)
{
    int x = minotaur_pos.first;
    int y = minotaur_pos.second;
    int tx = theseus_pos.first;
    int ty = theseus_pos.second;

    for (int i = 0; i < 2; ++i)
    {
        if ((y < ty && can_move("R", maze[x][y])) || (y > ty && can_move("L", maze[x][y])))
        {
            y += (y < ty) ? 1 : -1;
        }
        else if ((x < tx && can_move("D", maze[x][y])) || (x > tx && can_move("U", maze[x][y])))
        {
            x += (x < tx) ? 1 : -1;
        }
    }

    return std::make_pair(x, y);
}
