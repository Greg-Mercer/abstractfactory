//
// Created by Greg on 2018-11-28.
//

#ifndef ABSTRACTFACTORY_MAZE_FACTORY_HPP
#define ABSTRACTFACTORY_MAZE_FACTORY_HPP


#include "maze.hpp"
#include "wall.hpp"
#include "room.hpp"
#include "door.hpp"

class maze_factory {
public:
    virtual maze make_maze() = 0;
    virtual wall make_wall() = 0;
    virtual room make_room() = 0;
    virtual door make_door(room& a, room&b) = 0;

};

class enchanted_maze_factory : public maze_factory {
    maze make_maze() override {
        return maze();
    }

    wall make_wall() override {
        return enchanted_wall();
    }

    room make_room() override {
        return enchanted_room();
    }

    door make_door(room& a, room&b) override {
        return enchanted_door(a, b);
    }
};

class dystopian_maze_factory : public maze_factory {
    maze make_maze() override {
        return maze();
    }

    wall make_wall() override {
        return wall();
    }

    room make_room() override {
        return room();
    }

    door make_door(room& a, room&b) override {
        return door(a, b);
    }
};


#endif //ABSTRACTFACTORY_MAZE_FACTORY_HPP
