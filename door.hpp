//
// Created by Greg on 2018-11-28.
//

#ifndef ABSTRACTFACTORY_DOOR_HPP
#define ABSTRACTFACTORY_DOOR_HPP


#include "room.hpp"
#include <iostream>

using namespace std;

/**
 * A door within a maze.
 */
class door {
protected:
    room& room1;
    room& room2;
public:
    door(room &room1, room &room2) : room1(room1), room2(room2) {};
};

/**
 * An enchanted door within an enchanted faery maze.
 */
class enchanted_door : public door {
public:
    enchanted_door(room& a, room& b) : door(a, b) {
        room1 = a;
        room2 = b;
        cout << "Created an enchanted door between two enchanted rooms." << endl;
    }
};

/**
 * A dystopian door within a futuristic dystopian maze.
 */
class dystopian_door : public door {
public:
    dystopian_door(room& a, room& b) : door(a, b) {
        room1 = a;
        room2 = b;
        cout << "Created a dystopian door between two dystopian rooms. The officers say big brother will let me "
        << "through here if I behave. "<< endl;
    }
};


#endif //ABSTRACTFACTORY_DOOR_HPP
