#include <iostream>
#include <string>
using namespace std;

void print(int);
void print(double);
void print(string);

int main(){
    print(1);
    print(1.1);
    print("abc");
}

void print(int i){
    cout << i << "\n";
}

void print(double i){
    cout << i << "\n";
}

void print(string i){
    cout << i << "\n";
}