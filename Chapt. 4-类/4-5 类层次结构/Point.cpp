#include "Point.h"

Point::Point() : x(0), y(0){};
Point::Point(double x_value, double y_value) : x(x_value), y(y_value){};

double Point::get_x() const { return x; }
double Point::get_y() const { return y; }