#include "Team.hpp"
using namespace ariel;

// constructor
Team:: Team(Character* team_leader_)
    : team_leader(team_leader_){}

Team::~Team(){}

void Team:: add(Character*){}

void Team:: attack(Team*){}

int Team:: stillAlive(){return 0;}

string Team:: print(){return "";}
