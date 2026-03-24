cmake_minimum_required(VERSION 4.2)
project(CodeForces)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(.vscode)

add_executable(CodeForces
        .idea/.gitignore
        .idea/workspace.xml
        .vscode/tasks.json
        .gitignore
        236A_CodeForces.cpp
        266A_CodeForces.cpp
        266A_CodeForces.exe
        546A_soldiers_and_banana.cpp
        71_A_way_too_long_words.cpp
        hello.exe
        README.md
        67_int_problem.cpp
        67_int_problem.cpp
        2214_contest_codeforces/2214_odd_man.cpp
        2214_contest_codeforces/AND.cpp
        2214_contest_codeforces/Neural_Feud.cpp
        2214_contest_codeforces/simple.cpp
        2214_contest_codeforces/shortest_path.cpp
        2214_contest_codeforces/alimony.cpp
        2214_contest_codeforces/you_are_not_robot.cpp
        hello.cpp)
