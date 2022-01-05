#include<iostream>
using namespace std;

int main(){
    int v1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int v2[10];

    for (int i = 0; i != 10;i++){
        v2[i] = v1[i];
    }

    for (auto x:v2){
        cout << x << ' ';
    }
}