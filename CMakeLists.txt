cmake_minimum_required(VERSION 3.12)
project(abstractfactory)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")

add_executable(abstractfactory main.cpp maze_factory.hpp maze.hpp wall.hpp room.hpp door.cpp door.hpp maze_game.hpp)