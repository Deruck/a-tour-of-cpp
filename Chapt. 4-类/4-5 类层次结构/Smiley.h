#include "Circle.h"
#include <vector>

class Smiley:public Circle{
    std::vector<Shape *> eyes;
    Shape *mouth;

public:
    Smiley(Point p, int r);
    ~Smiley();

    void move(Point to) override;
    void draw() const override;
    void rotate(int) override;

    void add_eye(Shape *s);
    void set_mouth(Shape *s);
    virtual void wink(int i);
};