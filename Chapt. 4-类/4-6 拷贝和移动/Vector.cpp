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


Vector::Vector(const Vector &a):
    elem{new double[a.sz]},
    sz{a.sz}
{
    for (int i = 0; i != sz;++i){
        elem[i] = a.elem[i];
    }
}


Vector &Vector::operator=(const Vector &a){
    double *p = new double[a.sz];
    for (int i = 0; i != a.sz;++i){
        p[i] = a.elem[i];
    }
    delete[] elem;
    elem = p;
    sz = a.sz;
    return *this;
}

Vector::Vector(Vector &&a):          // 移动构造函数
    elem{a.elem},
    sz{a.sz}
{
    a.elem = nullptr;
    a.sz = 0;
} 
Vector &Vector::operator=(Vector &&a){  // 移动赋值运算符

} 