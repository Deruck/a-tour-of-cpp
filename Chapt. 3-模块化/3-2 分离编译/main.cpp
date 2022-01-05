#include "user.h"
#include<iostream>

using namespace std;

int main(){
    int s = 5;
    Vector v(s);
    for (int i = 0; i != s;i++){
        v[i] = i;
    }

    cout << sqrt_sum(v) << endl;
}
