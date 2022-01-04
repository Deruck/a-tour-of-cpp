#include<iostream>
using namespace std;

int main(){
    int i;
    double d;
    unsigned u;
    bool b;
    char c;

    cout << "int类型长度为 " << sizeof(i) << "\n";
    cout << "double类型长度为 " << sizeof(d) << "\n";
    cout << "unsigned类型长度为 " << sizeof(u) << "\n";
    cout << "bool类型长度为 " << sizeof(b) << "\n";
    cout << "char类型长度为 " << sizeof(c) << "\n";
}