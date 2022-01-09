#include "Circle.h"

Circle::Circle(Point p, int rr):x(p),r(rr){}
Point Circle::center() const { return x; }
void Circle::move(Point to) { x = to; }
void Circle::rotate(int){}