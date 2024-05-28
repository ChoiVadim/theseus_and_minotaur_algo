#include "mazes.h"
#include <vector>
#include <string>

// Initialize the vectors with the given data

std::vector<std::vector<std::string>> test1_pos = {
    {"", "M", "", ""},
    {"", "", "", "E"},
    {"", "T", "", ""}
};

std::vector<std::vector<std::string>> test1 = {
    {"DL", "RL", "LD", ""},
    {"UDR", "L", "UDR", "EXIT"},
    {"UR", "LR", "LU", ""}
};

std::vector<std::vector<std::string>> test2_pos = {
    {" ", "M", " ", " "},
    {" ", "T", " ", "E"},
    {" ", " ", " ", " "},
    {" ", " ", " ", " "}
};

std::vector<std::vector<std::string>> test2 = {
    {"DR", "RL", "LD", ""},
    {"UDR", "LRD", "UDRL", "EXIT"},
    {"U", "UDR", "UDL", ""},
    {"R", "URL", "UL", ""}
};

std::vector<std::vector<std::string>> test3_pos = {
    {" ", " ", " ", "", "", "", ""},
    {"M", " ", "T", "", "", "", ""},
    {" ", " ", " ", "", "", "", ""},
    {" ", " ", " ", "", "", "", ""},
    {" ", "E", " ", "", "", "", ""}
};

std::vector<std::vector<std::string>> test3 = {
    {"DRS", "DLRS", "DLRS", "DLRS", "DLRS", "DLRS", "DLS"},
    {"UDS", "US", "UDRS", "UDLRS", "UDLRS", "UDLRS", "UDLS"},
    {"UDRS", "DLRS", "UDLRS", "UDLRS", "UDLS", "US", "UDS"},
    {"URS", "UDRLS", "URLS", "URLS", "URLS", "RLS", "ULS"},
    {"", "EXIT", "", "", "", "", ""}
};

std::vector<std::vector<std::string>> maze1_pos = {
    {" ", " ", " ", "", "E", ""},
    {"T", " ", " ", "", " ", ""},
    {" ", " ", " ", "", " ", ""},
    {" ", " ", " ", "", "M", ""},
    {" ", " ", " ", "", " ", ""},
    {" ", " ", " ", "", " ", ""},
    {" ", " ", " ", "", " ", ""}
};

std::vector<std::vector<std::string>> maze1 = {
    {" ", " ", " ", "", "E", ""},
    {"   R", " DLR", " DLR", " DLR", "UDL ", "D   "},
    {" D R", "U L ", "UD R", "UDL ", "U   ", "UD  "},
    {"UD  ", " D  ", "U   ", "UD R", "  LR", "UDL "},
    {"UD  ", "UD R", "  LR", "UDL ", " D R", "UDL "},
    {"UD  ", "UD  ", "DR  ", "UDLR", "UDLR", "UDL "},
    {"U  R", "U LR", "U LR", "U LR", "U LR", "U L "}
};

std::vector<std::vector<std::string>> maze2_pos = {
    {" ", "E", " ", "", " ", ""},
    {" ", " ", " ", "", " ", ""},
    {" ", " ", " ", "", " ", ""},
    {" ", " ", " ", "", " ", ""},
    {" ", " ", " ", "", " ", ""},
    {"M", " ", " ", "", "T", ""},
    {" ", " ", " ", "", " ", ""}
};

std::vector<std::vector<std::string>> maze2 = {
    {" ", "E", " ", "", " ", ""},
    {" D R", "U LR", " DLR", " DLR", "  L ", " D  "},
    {"UD R", "D LR", "UDL ", "UD R", "  LR", "UDL "},
    {"UD R", "UDLR", "UDL ", "UD R", " DL ", "UD  "},
    {"U   ", "UD R", "UDLR", "UDL ", "U   ", "UD  "},
    {" D R", "UDLR", "U LR", "UDLR", " DL ", "UD  "},
    {"U  R", "U LR", "  LR", "U LR", "U LR", "U L "}
};

std::vector<std::vector<std::string>> maze3_pos = {
    {"T", " ", " ", "", " ", "", "", "", ""},
    {" ", " ", " ", "", " ", "", "", "", ""},
    {" ", " ", "M", "", " ", "", "", "", ""},
    {" ", " ", " ", "", " ", "", "", "", ""},
    {" ", " ", " ", "", " ", "", "", "", ""},
    {" ", " ", " ", "", " ", "", "", "", ""},
    {" ", " ", " ", "", " ", "", "", "", ""},
    {" ", " ", " ", "", " ", "", "", "", ""},
    {" ", "E", " ", "", " ", "", "", "", ""}
};

std::vector<std::vector<std::string>> maze3 = {
    {"   R", "  LR", " DLR", " DL ", " D R", " DL ", " D R", "  LR", " DL "},
    {" D R", " DL ", "U   ", "UD  ", "UD  ", "UD  ", "UD R", "  L ", "UD  "},
    {"UD  ", " UR ", "LD  ", "UD R", "U L ", "U  R", "U L ", " D R", "UDL "},
    {"U  R", " DL ", "UD  ", "U  R", " DL ", " D R", "  LR", "U LR", "U L "},
    {" D  ", "UD  ", "U R ", " DLR", "U L ", "U  R", "  LR", "  LR", " DL "},
    {"UD R", "U L ", " D R", "U L ", " D R", " DLR", "  LR", "  LR", "U L "},
    {"UD  ", " D  ", "UD R", "  L ", "UD  ", "U  R", "  LR", "  LR", " DL "},
    {"U   ", "UDR ", "U LR", "  LR", "U LR", "  L ", "   R", "  LR", "U L "},
    {" ", "E", " ", "", " ", "", "", "", ""}
};

std::vector<std::vector<std::string>> maze4_pos = {
    {" ", " ", " ", "E", " ", "", "", "", ""},
    {"M", " ", " ", "", " ", "", "", "", "T"},
    {" ", " ", " ", "", " ", "", "", "", ""},
    {" ", " ", " ", "", " ", "", "", "", ""},
    {" ", " ", " ", "", " ", "", "", "", ""},
    {" ", " ", " ", "", " ", "", "", "", ""},
    {" ", " ", " ", "", " ", "", "", "", ""},
    {" ", " ", " ", "", " ", "", "", "", ""},
    {" ", "E", " ", "", " ", "", "", "", ""}
};

std::vector<std::vector<std::string>> maze4 = {
    {" ", " ", " ", "E", " ", "", "", "", ""},
    {"   R", "  LR", " DLR", "UDLR", " DLR", "  LR", " DLR", " DLR", " DL "},
    {" D R", " DLR", "UDLR", "UDLR", "UDLR", " DLR", "UDLR", "UDLR", "UDL "},
    {"UD R", "UDLR", "UDLR", "U LR", "UDLR", "UDLR", "UDLR", "UDLR", "UDL "},
    {"UD  ", "U  R", "UDL ", " D  ", "UD R", "UDLR", "UDLR", "UDL ", "UD  "},
    {"UD  ", " D R", "UDLR", "UDLR", "UDLR", "UDLR", "UDLR", "U L ", "UD  "},
    {"UD  ", "UD R", "UDLR", "UDLR", "UDLR", "UDLR", "UDLR", " DL ", "UD  "},
    {"UD R", "UDLR", "UDLR", "UDLR", "UDLR", "UDLR", "UDLR", "UDL ", "UD  "},
    {"U  R", "U LR", "U LR", "  LR", "U LR", "U LR", "U LR", "U LR", "U L "}
};

std::vector<std::vector<std::string>> maze5_pos = {
    {"E", "M", " ", "", "", "", "", "", ""},
    {" ", " ", "T", "", "", "", "", "", ""},
    {" ", " ", " ", "", "", "", "", "", ""},
    {" ", " ", " ", "", "", "", "", "", ""},
    {" ", " ", " ", "", "", "", "", "", ""},
    {" ", " ", " ", "", "", "", "", "", ""},
    {" ", " ", " ", "", "", "", "", "", ""},
    {" ", " ", " ", "", "", "", "", "", ""}
};

std::vector<std::vector<std::string>> maze5 = {
    {"E", " DL ", " D R", " DLR", " DLR", " DLR", "  LR", " DLR", "  L "},
    {" ", "UDR ", "UDLR", "UDLR", "UDLR", "UDLR", " DLR", "UDL ", " D  "},
    {" ", "UDR ", "UDLR", "UDLR", "UDLR", "UDL ", "UD R", "UDLR", "UDL "},
    {" ", "UDR ", "U LR", "UDLR", "UDL ", "UD R", "U LR", "UDLR", "UDL "},
    {" ", "UDR ", " DLR", "UDL ", "UD R", "UDLR", " DLR", "UDLR", "UDL "},
    {" ", "U   ", "UD  ", "UD R", "UDLR", "UDLR", "UDL ", "U  R", "UDL "},
    {" ", "   R", "UDL ", "UD R", "UDL ", "U  R", "UDLR", " DLR", "UDL "},
    {" ", "   R", "U LR", "U LR", "U LR", "  L ", "U  R", "U LR", "U L "}
};

std::vector<std::vector<std::string>> maze6_pos = {
    {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
    {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "E"},
    {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
    {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
    {"T", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "M", " "},
    {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
    {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
    {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
    {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "}
};

std::vector<std::vector<std::string>> maze6 = {
    {"R", "LR", "LRD", "LRD", "LD", "RD", "LR", "LRD", "L", "R", "LRD", "LR", "LR", "LD", ""},
    {"D", "D", "UD", "U", "UD", "UD", "R", "LRUD", "LR", "LR", "LU", "R", "RL", "LRUD", "E"},
    {"RUD", "LRUD", "LRU", "LRD", "LRUD", "LURD", "LR", "LRUD", "LRD", "LRD", "LR", "LR", "LRD", "UDL", ""},
    {"UD", "UD", "R", "UDL", "UD", "UDR", "LRD", "UDL", "UD", "UR", "LR", "LR", "UDL", "UD", ""},
    {"UD", "UD", "DR", "UDL", "UD", "UD", "UD", "UD", "UDR", "LR", "LR", "LD", "UD", "UD", ""},
    {"UD", "UD", "UD", "UDR", "UDL", "UD", "UDR", "DRUL", "DRUL", "LR", "LR", "LUD", "UD", "UD", ""},
    {"UD", "UD", "UD", "UD", "UD", "UD", "UD", "UD", "UDR", "LR", "LR", "UDL", "UD", "UD", ""},
    {"UD", "UD", "UD", "UD", "UD", "UD", "UD", "UD", "UDR", "LR", "LR", "UDL", "UD", "UD", ""},
    {"UR", "ULR", "ULR", "ULR", "ULR", "ULR", "ULR", "ULR", "ULR", "LR", "LR", "ULR", "ULR", "UL", ""}
};

std::vector<std::vector<std::string>> maze7_pos = {
    {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
    {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
    {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
    {" ", " ", " ", " ", " ", " ", "M", " ", " ", " ", " ", " ", " ", " ", " "},
    {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
    {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "T", " ", "E"},
    {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
    {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
    {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "}
};

std::vector<std::vector<std::string>> maze7 = {
    {"DR", "LD", "DR", "LR", "LRD", "LR", "LR", "LRD", "LRD", "L", "RD", "LR", "LR", "LD", ""},
    {"UD", "UR", "ULR", "LD", "UD", "DR", "LR", "LUD", "RUD", "L", "UD", "D", "D", "UD", ""},
    {"UDR", "LD", "DR", "LRU", "LRU", "LRUD", "LR", "LRUD", "LRU", "LD", "UD", "UDR", "LRUD", "LUD", ""},
    {"UD", "UDR", "LRUD", "LRD", "LD", "UD", "R", "LRUD", "LD", "UDR", "LUD", "UD", "UD", "UD", ""},
    {"UD", "UD", "UD", "UD", "UD", "UDR", "LD", "UD", "UD", "UD", "UD", "UDR", "LRU", "LU", ""},
    {"UDR", "ULR", "ULR", "ULR", "UDL", "UD", "UDR", "UDL", "UD", "UD", "UD", "UD", "D", "DR", "E"},
    {"UR", "LR", "LRD", "LD", "UR", "LRU", "UDL", "UDR", "LRU", "UDL", "UR", "LRUD", "LU", "UD", ""},
    {"D", "D", "UD", "UD", "R", "LR", "UDL", "UDR", "LRD", "LRU", "LR", "LRU", "LD", "UD", ""},
    {"UR", "ULR", "ULR", "ULR", "LR", "LR", "ULR", "LU", "UR", "LR", "LR", "LR", "ULR", "UL", ""}
};
