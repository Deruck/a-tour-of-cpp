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
void f(Vector &v);






// 主程序
int main(){
    Vector v(3);
    f(v);

    cout << "抛出错误后程序仍然可以继续运行" << endl;
}





// 定义
void f(Vector &v){
    try{
        v[v.size()] = 7;
    }
    catch(out_of_range){
        cout << "越界错误" << endl;
    }
}

Vector::Vector(int s):elem{new double[s]},sz{s}{

}

double& Vector::operator[](int i) {
    if (i<0 || size()<=i){
        throw out_of_range{"Vector::operator[]"};  // 定义越界错误
    }
    return elem[i];
}

int Vector::size(){
    return sz;
}


