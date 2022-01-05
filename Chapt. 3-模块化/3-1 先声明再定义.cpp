#include<iostream>
using namespace std;

// 声明
class Vector{
public:
    Vector(int s);
    double &operator[](int i);
    int size();
private:
    double *elem;
    int sz;
};
double read_and_sum(int s);

// 主程序
int main(){
    cout << read_and_sum(5) << endl;
}

// 定义

double read_and_sum(int s){
    Vector v(s);
    for (int i = 0; i != s;i++){
        cin >> v[i];
    }

    int sum = 0;
    for (int i = 0; i != v.size();i++){
        sum += v[i];
    }
    return sum;
}

Vector::Vector(int s):elem{new double[s]},sz{s}{

}

double& Vector::operator[](int i) {
    return elem[i];
}

int Vector::size(){
    return sz;
}


