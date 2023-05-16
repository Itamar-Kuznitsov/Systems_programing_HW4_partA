#include "SmartTeam.hpp"
using namespace ariel;

// constructor
SmartTeam:: SmartTeam(Character* team_leader_)
    : team_leader(team_leader_){}

SmartTeam::~SmartTeam(){}

void SmartTeam:: add(Character*){}

void SmartTeam:: attack(SmartTeam*){}

int SmartTeam:: stillAlive(){return 0;}

string SmartTeam:: print(){return "";}
