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




// 主程序
int main(){
    try{
        Vector v(-27);
    }
    catch(length_error e){
        cout << "length error: "<<e.what()<< endl;
        throw; // 重新抛出
    }

    cout << "abc" << endl; // 重新抛出错误后程序不会继续执行，注释掉throw即可继续执行
}





// 定义
Vector::Vector(int s){   // 构造函数中检验实参有效性
    if(s<0)
        throw length_error{"Vector长度必须为正"};
    elem = new double[s];
    sz = s;
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

