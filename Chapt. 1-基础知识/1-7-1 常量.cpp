#include<iostream>
using namespace std;

// # 1. 常量表达式中的变量必须是常量

const int dmv = 17;
int var = 17;
constexpr double max1 = 1.4 * dmv;
// constexpr double max2 = 1.4 * var;   # error: the value of 'var' is not usable in a constant expression


// # 2. 常量表达式中的函数也必须是常量表达式函数

// double square(double x) { return x * x; }  # error: call to non-'constexpr' function 'double square(double)
constexpr double square(double x) { return x * x; }
constexpr double max3 = square(dmv);

int main () {  
    



}  