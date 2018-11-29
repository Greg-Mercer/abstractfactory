//
// Created by Greg on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_MAZE_GAME_HPP
#define ABSTRACTFACTORY_MAZE_GAME_HPP


#include "maze.hpp"
#include "maze_factory.hpp"

/**
 * A maze game. For creating a sample maze given a maze factory.
 */
class maze_game {
public:
    /**
     * Creates a maze using a maze factory.
     * @param factory the factory to make the maze with
     * @return a new maze
     */
    maze create_maze(maze_factory& factory) {
        maze m = factory.make_maze();
        room r1 = factory.make_room();
        room r2 = factory.make_room();
        door d = factory.make_door(r1, r2);
        m.add_room(r1);
        m.add_room(r2);
        m.add_door(d);
        return m;
    }
};


#endif //ABSTRACTFACTORY_MAZE_GAME_HPP
