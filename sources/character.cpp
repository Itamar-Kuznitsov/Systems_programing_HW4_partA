#include "character.hpp"

using namespace ariel;

// constructor
Character:: Character(string name_, Point location_)
    : location(location_), name(name_){}

Character:: Character(){}

// destructor
Character:: ~Character(){}

bool Character:: isAlive(){return 0;}

double Character:: distance(Character*){return 0;}

void Character:: hit(int hits){}

string Character:: getName(){return "";}

Point Character:: getLocation(){return Point();}

string Character:: print(){return "";}

void Character:: set_character_hit_points(int hit_points){
    this->hits = hit_points;
}
