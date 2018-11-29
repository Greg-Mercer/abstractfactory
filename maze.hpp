//
// Created by Greg on 2018-11-28.
//

#ifndef ABSTRACTFACTORY_MAZE_HPP
#define ABSTRACTFACTORY_MAZE_HPP


#include <vector>
#include "room.hpp"
#include "door.hpp"

/**
 * A maze. Created by a maze factory.
 */
class maze {
private:
    // A collection of rooms in the maze.
    vector<room> rooms;

    // A collection of doors in the maze.
    vector<door> doors;

public:
    /**
     * Adds a room to this maze.
     * @param r the room to add
     */
    void add_room(room& r) {
        rooms.emplace_back(r);
        cout << "Added room to maze. " << endl;
    }

    /**
     * Adds a door between rooms to this maze.
     * @param d the door to add
     */
    void add_door(door& d) {
        doors.emplace_back(d);
        cout << "Added door to maze. " << endl;
    }
};


#endif //ABSTRACTFACTORY_MAZE_HPP
