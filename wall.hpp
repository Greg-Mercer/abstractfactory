//
// Created by Greg on 2018-11-28.
//

#ifndef ABSTRACTFACTORY_WALL_HPP
#define ABSTRACTFACTORY_WALL_HPP


#include <iostream>

class wall {

};

class enchanted_wall : public wall {
public:
    enchanted_wall() {
        std::cout << "Created an enchanted wall." << std::endl;
    }
};


#endif //ABSTRACTFACTORY_WALL_HPP
