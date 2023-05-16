#include "TrainedNinja.hpp"


using namespace ariel;

TrainedNinja:: TrainedNinja(string name, Point location)
    : Ninja(name, location) {
        this-> set_ninja_speed(12);
        this-> set_character_hit_points(120);
    }

TrainedNinja:: ~TrainedNinja() {}

void TrainedNinja:: move(Character* target) {}
void TrainedNinja:: slash(Character* target) {}
