#pragma once
#include<math.h>
#include <iostream>
using namespace std;


/**
 * @about: This is the Point header file. part from cowboy vs ninja game. Task 4 | Part A
 *          course: Systems proggraming N.2
 * @author Itamar Kuznitsov
 * @since May. 2023  
*/

namespace ariel{

// Point class - (x,y)
class Point{
    private:
        double x;
        double y;
    
    public:
        Point(double, double);
        Point();
        double distance(Point otherPoint);
        string print();
};
}