#include "complex.h"

// 建构函数
complex::complex(double r, double i){
    re = r;
    im = i;
}

complex::complex(double r){
    re = r;
    im = 0;
}

complex::complex(){
    re = 0;
    im = 0;
}



// 成员访问接口
double complex::real() const { return re; }
void complex::real(double d) { re = d; }

double complex::imag() const{return im;}
void complex::imag(double d) { im = d; }

// 重载操作符
complex &complex::operator+=(complex z){
    re += z.re;
    im += z.im;
    return *this;
}
complex &complex::operator-=(complex z){
    re -= z.re;
    im -= z.im;
    return *this;  
}



complex operator+(complex a, complex b){
    return a += b;
}
complex operator-(complex a, complex b){
    return a -= b;
}
complex operator-(complex a){
    return complex{-a.real(), -a.imag()};
}
bool operator==(complex a, complex b){
    return a.real() == b.real() && a.imag() == b.imag();
}
bool operator!=(complex a, complex b){
    return !(a==b);
}
