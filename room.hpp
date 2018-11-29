//
// Created by Greg on 2018-11-28.
//

#ifndef ABSTRACTFACTORY_ROOM_HPP
#define ABSTRACTFACTORY_ROOM_HPP


#include <vector>
#include "wall.hpp"

/**
 * A room within a maze.
 */
class room {
protected:
    std::vector<wall> walls;
};

/**
 * An enchanted room within an enchanted faery maze.
 */
class enchanted_room : public room {
public:
    enchanted_room() {
        for(int i = 0; i < 4; i++) {
            walls.emplace_back(enchanted_wall());
        }
        std::cout << "Created an enchanted room. So sparkly." << std::endl;
    }
};

/**
 * A dystopian room within a futuristic dystopian maze.
 */
class dystopian_room : public room {
public:
    dystopian_room() {
        for(int i = 0; i < 4; i++) {
            walls.emplace_back(dystopian_wall());
        }
        std::cout << "Created a dystopian room. I'm never getting out of here, am I?" << std::endl;
    }
};


#endif //ABSTRACTFACTORY_ROOM_HPP
