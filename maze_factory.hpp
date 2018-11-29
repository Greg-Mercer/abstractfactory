//
// Created by Greg on 2018-11-28.
//

#ifndef ABSTRACTFACTORY_MAZE_FACTORY_HPP
#define ABSTRACTFACTORY_MAZE_FACTORY_HPP


#include "maze.hpp"
#include "wall.hpp"
#include "room.hpp"
#include "door.hpp"

/**
 * An implementation of the abstract factory design pattern. Creates mazes.
 */
class maze_factory {
public:
    /**
     * Creates a new maze.
     * @return a maze
     */
    virtual maze make_maze() = 0;

    /**
     * Creates a new wall.
     * @return a wall
     */
    virtual wall make_wall() = 0;

    /**
     * Creates a new room.
     * @return a room
     */
    virtual room make_room() = 0;
    /**
     * Creates a new door between two rooms.
     * @param a a room this door connects to
     * @param b a room this door connects to
     * @return a door
     */
    virtual door make_door(room& a, room&b) = 0;

};

/**
 * A factory for producing enchanted faery mazes.
 */
class enchanted_maze_factory : public maze_factory {
    maze make_maze() override {
        cout << "Creating enchanted maze. " << endl;
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

/**
 * A factory for producing futuristic dystopian mazes.
 */
class dystopian_maze_factory : public maze_factory {
    maze make_maze() override {
        cout << "Creating futuristic dystopian maze. I mean... the next great step in human progress. " << endl;
        return maze();
    }

    wall make_wall() override {
        return dystopian_wall();
    }

    room make_room() override {
        return dystopian_room();
    }

    door make_door(room& a, room&b) override {
        return dystopian_door(a, b);
    }
};


#endif //ABSTRACTFACTORY_MAZE_FACTORY_HPP
