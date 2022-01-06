#include<iostream>
using namespace std;



int main(){

    const int a = 1;
    static_assert(a > 0, "a must greater than 0."); // a<=0时编译出错
}