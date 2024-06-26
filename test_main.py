from main import print_maze_solution
from mazes import *

def test1():
    assert print_maze_solution(maze1_pos, maze1) == "RDLDDDDRRRRRUUUUUDDLLDLLDDLUUUURUDLDDDDRLRUURRDRRDUUULLUURU"

def test2():
    assert print_maze_solution(maze2_pos, maze2) == "DRUUUULLRRDDDDLLLLUUULUUDRDDDLSRRRUUURRUDDDDDLLRRLULLLDURUUUULU"

def test3():
    assert print_maze_solution(maze3_pos, maze3) == "RRRDDRUURDDRUURRDDLDLLDRRRDLLLLDDLLRRUURRRRULLLURRRUUULLDDLUULDDLDRDLLUULULDDRDDLDDUURUULUURDRDDRRULURUURDDRUURRDDLDLLDRRRDLLLDRRRDULLLURRRULLLURRRUUULLDDLUULRDDRUURRLLDDLUULDDLDRDLDLDDLD"

def test4():
    assert print_maze_solution(maze4_pos, maze4) == "LLDLDDDDDDRRRLULLLLLLLUUUUDDDDRURRRRRDUURUUUULLLLU"

def test5():
    assert print_maze_solution(maze5_pos, maze5) == "URRRRRDDDDLDDRSLLULLULLUDRDDLSRDRRUURRDRRUUDDSULUUUULRURLLLLLLDLUL"

def test6():
    assert print_maze_solution(maze6_pos, maze6) == "UURRRDDLDDDDRRRUUUUURRUURRRURRRLLLDLLLDRRRRRDDDDDDRLSLULLLUULUUUUULLDDDRDDDDDRRRRRRUUUUUURUR"

def test7():
    assert print_maze_solution(maze7_pos, maze7) == "DLUURRUUUULLLDDDLULUULLLLLLDLULDDUURDRURRRRRDDDRDDDRLUUULDDLDLLULLLLDRRRDDRRRLLLLUULLURRUUURRRRSRRRDRUUURRRDDLLDDDDDULUUUUUURSLDDDLULLLLLLLDLDDLDUUUDDDRRDDUULLURRRRDRRURDRRDRRRDRUUUR"

"""
Maze 1: RDLDDDDRRRRRUUUUUDDLLDLLDDLUUUURUDLDDDDRLRUURRDRRDUUULLUURU
Maze 2: DRUUUULLRRDDDDLLLLUUULUUDRDDDLSRRRUUURRUDDDDDLLRRLULLLDURUUUULU
Maze 3: RRRDDRUURDDRUURRDDLDLLDRRRDLLLLDDLLRRUURRRRULLLURRRUUULLDDLUULDDLDRDLLUULULDDRDDLDDUURUULUURDRDDRRULURUURDDRUURRDDLDLLDRRRDLLLDRRRDULLLURRRULLLURRRUUULLDDLUULRDDRUURRLLDDLUULDDLDRDLDLDDLD
Maze 4: LLDLDDDDDDRRRLULLLLLLLUUUUDDDDRURRRRRDUURUUUULLLLU
Maze 5: URRRRRDDDDLDDRSLLULLULLUDRDDLSRDRRUURRDRRUUDDSULUUUULRURLLLLLLDLUL
Maze 6 : UURRRDDLDDDDRRRUUUUURRUURRRURRRLLLDLLLDRRRRRDDDDDDRLSLULLLUULUUUUULLDDDRDDDDDRRRRRRUUUUUURUR
Maze 7 : DLUURRUUUULLLDDDLULUULLLLLLDLULDDUURDRURRRRRDDDRDDDRLUUULDDLDLLULLLLDRRRDDRRRLLLLUULLURRUUURRRRSRRRDRUUURRRDDLLDDDDDULUUUUUURSLDDDLULLLLLLLDLDDLDUUUDDDRRDDUULLURRRRDRRURDRRDRRRDRUUUR
"""