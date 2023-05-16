#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "character.hpp"
#include "cowboy.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"


/**
 * @about: This is the SmartTeam header file. part from cowboy vs ninja game. Task 4 | Part A
 *          course: Systems proggraming N.2
 * @author Itamar Kuznitsov
 * @since May. 2023  
*/

namespace ariel{

class SmartTeam{
    private:
        vector<Character*> characters;
        Character* team_leader;
    public:
        SmartTeam(Character*);
        ~SmartTeam();    
        void add(Character*);
        void attack(SmartTeam*);
        int stillAlive();
        string print();
};
}