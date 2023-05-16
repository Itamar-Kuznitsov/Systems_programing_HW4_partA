#include "doctest.h"
using namespace std;

#include "sources/Team.hpp"

using namespace ariel;


/**
 * @about: This is the Tests file. part from cowboy vs ninja game. Task 4 | Part A
 *          course: Systems proggraming N.2
 *          based on self learn from - https://github.com/doctest/doctest/blob/master/doc/markdown/tutorial.md
 * @author Itamar Kuznitsov
 * @since May. 2023  
*/


TEST_CASE("Test Cowboy and Ninja initialization") {
    Point a(32.3, 44), b(1.3, 3.5);
    Cowboy tom("Tom", a);
    OldNinja sushi("sushi", b);
    CHECK_NOTHROW(OldNinja("gil", a));
    CHECK_THROWS(Cowboy("Tom", a));
    CHECK_THROWS(Cowboy("David", a));
}

TEST_CASE("Test invalid character initialization") {
    Point a(32.3, 44), b(1.3, 3.5);
    CHECK_THROWS(Cowboy("", a));  // Empty name is not allowed
    CHECK_THROWS(OldNinja("Dan", Point()));  // Invalid position
}


TEST_CASE("Test moving and slashing functions") {
    Point a(32.3, 44), b(1.3, 3.5);
    Cowboy tom("Tom", a);
    OldNinja sushi("sushi", b);
    CHECK_NOTHROW(sushi.move(&tom));
    CHECK_NOTHROW(sushi.slash(&tom));
    CHECK_NOTHROW(sushi.move(&tom));
    CHECK_NOTHROW(sushi.slash(&tom));
}


TEST_CASE("Test adding ninjas and Cowboy to a team") {
    Point a(32.3, 44), b(1.3, 3.5), c(64, 57);
    Cowboy tom("Tom", a);
    OldNinja Dan("Dan", b);
    YoungNinja Yoni("Yoni", c);
    Team team_A(&tom);
    CHECK_NOTHROW(team_A.add(&Yoni));
    CHECK_THROWS_AS(team_A.add(&tom), invalid_argument); //tom is already team leader 
    CHECK_EQ(team_A.stillAlive(), 2);
    CHECK_NOTHROW(team_A.add(&Dan));
    CHECK_EQ(team_A.stillAlive(), 3);
}

TEST_CASE("Test team battles") {
    Point a(32.3, 44), b(1.3, 3.5), c(12, 81);
    Cowboy tom("Tom", a);
    OldNinja sushi("sushi", b);
    TrainedNinja Davi("Davi", c);
    Team team_A(&tom);
    team_A.add(&sushi);
    Team team_B(&Davi);

    while (team_A.stillAlive() > 0 && team_B.stillAlive() > 0) {
        CHECK_NOTHROW(team_A.attack(&team_B));
        CHECK_NOTHROW(team_B.attack(&team_A));
    }
}


TEST_CASE("Test team battle with one character in a team") {
    Point a(32.3, 44);
    Cowboy tom("Tom", a);
    OldNinja sushi("sushi", a);
    Team team_A(&tom);
    Team team_B(&sushi);

    CHECK_EQ(team_A.stillAlive(), 1);
    CHECK_EQ(team_B.stillAlive(), 1);
    CHECK_NOTHROW(team_A.attack(&team_B));
    CHECK_EQ(team_A.stillAlive(), 1);
    CHECK_EQ(team_B.stillAlive(), 0);
}


TEST_CASE("Test team battle with empty teams") {
    Team team_A(nullptr);
    Team team_B(nullptr);

    CHECK_EQ(team_A.stillAlive(), 0);
    CHECK_EQ(team_B.stillAlive(), 0);
    CHECK_NOTHROW(team_A.attack(&team_B));
    CHECK_EQ(team_A.stillAlive(), 0);
    CHECK_EQ(team_B.stillAlive(), 0);
}


TEST_CASE("Test character destruction") {
    Point a(32.3, 44);
    Cowboy *tom = new Cowboy("Tom", a);
    Team team_A(tom); 
    CHECK_EQ(team_A.stillAlive(), 1);
    CHECK_NOTHROW(delete tom);
    CHECK_EQ(team_A.stillAlive(), false);
}

TEST_CASE("Test multiple teams") {
    Point a(32.3, 44), b(1.3, 3.5), c(64, 57);
    Cowboy tom("Tom", a);
    OldNinja sushi("sushi", b);
    YoungNinja Dan("Dan", c);
    Team team_A(&tom);
    team_A.add(&sushi);
    Team team_B(&Dan);
    CHECK_EQ(team_A.stillAlive(), 2);
    CHECK_EQ(team_B.stillAlive(), 1);
    // cant be the same player in the different teams
    CHECK_THROWS(team_B.add(&tom));
    CHECK_THROWS(Team(&tom));
}

// end of Tests