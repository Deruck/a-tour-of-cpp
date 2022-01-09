#include "Container.h"
#include "Vector.h"
#include <iostream>

class Vector_container:public Container{
    Vector v;
public:
    Vector_container(int);
    Vector_container(std::initializer_list<double>);
    ~Vector_container();

    double &operator[](int);
    int size() const;
};