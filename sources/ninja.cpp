#include "ninja.hpp"
#include <iostream>
using namespace std;

using namespace ariel;

// constructor
Ninja:: Ninja(string name_, Point location_)
    : Character(name_, location_){}

// destructor
Ninja:: ~Ninja(){}

void Ninja:: set_ninja_speed(int speed_){
    this->speed = speed_;
}
