//
// Created by Greg on 2018-11-28.
//

#ifndef ABSTRACTFACTORY_WALL_HPP
#define ABSTRACTFACTORY_WALL_HPP


#include <iostream>

/**
 * A wall within a maze.
 */
class wall {

};

/**
 * An enchanted wall within an enchanted faery maze.
 */
class enchanted_wall : public wall {
public:
    enchanted_wall() {
        std::cout << "Created an enchanted wall. Looks like a forest." << std::endl;
    }
};

/**
 * A dystopian wall within a futuristic dystopian maze.
 */
class dystopian_wall : public wall {
public:
    dystopian_wall() {
        std::cout << "Created a dystopian wall. Cameras everywhere..." << std::endl;
    }
};


#endif //ABSTRACTFACTORY_WALL_HPP
