#include <iostream>
#include "maze_game.hpp"

int main() {

    maze_game mg{};
    enchanted_maze_factory emf{};
    maze em = mg.create_maze(emf);

    return 0;
}