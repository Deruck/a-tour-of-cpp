#include "Shape.h"

class Circle: public Shape{
private:
    Point x;
    int r;

public:
    Circle(Point p, int rr);
    Point center() const;
    void move(Point to);
    void draw() const;
    void rotate(int);
};