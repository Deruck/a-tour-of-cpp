#include "Vector.h"

Vector::Vector(int s):elem{new double[s]},sz{s}{
    for (int i = 0; i != s;i++){
        elem[i] = 0;
    }
}

Vector::Vector(std::initializer_list<double> lst){
    elem = new double[lst.size()];
    sz = static_cast<int>(lst.size());
    std::copy(lst.begin(), lst.end(), elem);
}

Vector::~Vector(){
    delete[] elem; // delete[] 释放new分配的对象数组指针指向的内存
}

double &Vector::operator[](int i){
    return elem[i];
}

int Vector::size() const{
    return sz;
}
