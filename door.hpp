//
// Created by Greg on 2018-11-28.
//

#ifndef ABSTRACTFACTORY_DOOR_HPP
#define ABSTRACTFACTORY_DOOR_HPP


#include "room.hpp"
#include <iostream>

using namespace std;

class door {
protected:
    room& room1;
    room& room2;
public:
    door(room &room1, room &room2) : room1(room1), room2(room2) {};
};

class enchanted_door : public door {
public:
    enchanted_door(room& a, room& b) : door(a, b) {
        room1 = a;
        room2 = b;
        cout << "Created an enchanted door between two enchanted rooms." << endl;
    }
};


#endif //ABSTRACTFACTORY_DOOR_HPP
