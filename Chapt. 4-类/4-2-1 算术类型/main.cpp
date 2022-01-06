#include<iostream>
#include "complex.h"

using namespace std;

int main(){
    complex z{1.1, 2.0};
    complex a{2.3};
    complex c = a + z;

    cout << c.real() << " " << c.imag() << endl;
    cout << int(c == z) << endl;
}