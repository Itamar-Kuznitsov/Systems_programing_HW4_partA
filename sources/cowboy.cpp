#include "cowboy.hpp"
#include <iostream>
using namespace std;
using namespace ariel;

// constructor
Cowboy:: Cowboy(string name_, Point location_)
    : Character(name_, location_), bullets_amount(6) {}

// destructor
Cowboy:: ~Cowboy(){}

void Cowboy:: shoot(Character*){}

bool Cowboy:: hasboolets(){return 0;}

void Cowboy:: reload(){}
