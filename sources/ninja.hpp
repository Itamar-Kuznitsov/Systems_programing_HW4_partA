#pragma once 
#include "character.hpp"
#include <iostream>
using namespace std;

/**
 * @about: This is the Ninja header file. part from cowboy vs ninja game. Task 4 | Part A
 *          course: Systems proggraming N.2
 * @author Itamar Kuznitsov
 * @since May. 2023  
*/

namespace ariel{

class Ninja : public Character{
    private:
        int speed;
    public:
        Ninja(string name_, Point location_);
        virtual ~Ninja();
        void set_ninja_speed(int);
        virtual void move(Character*) = 0;
        virtual void slash(Character*) = 0;
};
}