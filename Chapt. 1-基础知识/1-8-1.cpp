#include<iostream>
using namespace std;

int main(){
    int v[3]={1,2,3};
    int *p=&v[1];
    int &r = v[1];

    

    cout << v[1] << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;
    cout << r << endl;
    cout << &r << endl;
}