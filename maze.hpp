//
// Created by Greg on 2018-11-28.
//

#ifndef ABSTRACTFACTORY_MAZE_HPP
#define ABSTRACTFACTORY_MAZE_HPP


#include <vector>
#include "room.hpp"
#include "door.hpp"

class maze {
private:
    vector<room> rooms;
    vector<door> doors;

public:
    void add_room(room& r) {
        rooms.emplace_back(r);
        cout << "Added room to maze. " << endl;
    }

    void add_door(door& d) {
        doors.emplace_back(d);
        cout << "Added door to maze. " << endl;
    }
};


#endif //ABSTRACTFACTORY_MAZE_HPP
