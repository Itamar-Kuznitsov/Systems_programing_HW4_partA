#include <iostream>
#include "point.hpp"

using namespace std;
using namespace ariel;

// constructor:
Point:: Point(double x_, double y_)
    : x(x_), y(y_) {}

// empty constructor
Point:: Point(){}

// calculate distance
double Point:: distance(Point otherPoint){
    int first = pow((this->x - otherPoint.x), 2);
    int second = pow((this->y - otherPoint.y), 2);
    return sqrt(first + second);
}

// print point in a form of : (x,y)
string Point:: print(){
    string res = "(" + to_string(this->x) + "," + to_string(this->y) + ")" ;
    return res;
}
