#include<iostream>
using namespace std;

int main(){
    int i = 7;
    double d = 2.2;

    cout << "计算前，i的空间占用为：" << sizeof(i) << "\n";
    cout << "计算前，d的空间占用为：" << sizeof(d) << "\n";

    i += d;  // 执行double加法，但是结果被转回int类型
    d += i;

    cout<<"计算后，i的空间占用为："<< sizeof(i) <<" ，值为 "<<i<<"\n";
    cout << "计算前，d的空间占用为：" << sizeof(d) <<" ，值为 "<<d<< "\n";
}