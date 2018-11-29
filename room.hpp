//
// Created by Greg on 2018-11-28.
//

#ifndef ABSTRACTFACTORY_ROOM_HPP
#define ABSTRACTFACTORY_ROOM_HPP


#include <vector>
#include "wall.hpp"

class room {
protected:
    std::vector<wall> walls;
};

class enchanted_room : public room {
public:
    enchanted_room() {
        for(int i = 0; i < 4; i++) {
            walls.emplace_back(enchanted_wall());
        }
        std::cout << "Created an enchanted room." << std::endl;
    }
};


#endif //ABSTRACTFACTORY_ROOM_HPP
