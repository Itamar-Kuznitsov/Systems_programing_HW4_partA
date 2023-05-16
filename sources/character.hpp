#pragma once
#include <iostream>
using namespace std;
#include "point.hpp"

/**
 * @about: This is the Character header file. part from cowboy vs ninja game. Task 4 | Part A
 *          course: Systems proggraming N.2
 * @author Itamar Kuznitsov
 * @since May. 2023  
*/


namespace ariel{

class Character{
    private:
        Point location;
        int hits;
        string name;

    public:
        Character(string, Point);
        Character();
        ~Character();
        bool isAlive();
        double distance(Character*);
        void hit(int hits);
        string getName();
        Point getLocation();
        string print();
        void set_character_hit_points(int);
        // // Overload the << operator for the Character class
        // ostream& operator<<(ostream& os, const Character&);

}; 
}