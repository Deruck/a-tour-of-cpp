#include<iostream>



template<typename T>
class Vector{
private:
    T *elem; // 指向含size个double元素的数组
    int sz;
public:
    explicit Vector(int); // 用长度初始化
    Vector(std::initializer_list<T>); // 用列表初始化
    ~Vector(); // 析构函数

    T &operator[](int);
    int size() const;

    void push_back(T); // 在末尾push一个元素

    T *begin(Vector<T> &x);
    T *end(Vector<T> &x);    // for遍历
};






// 模板的实现也要写在头文件里，否则编译错误

template<typename T>
Vector<T>::Vector(int s):elem{new T[s]},sz{s}{
    for (int i = 0; i != s;i++){
        elem[i] = 0;
    }
}

template<typename T>
Vector<T>::Vector(std::initializer_list<T> lst){
    elem = new T[lst.size()];
    sz = static_cast<int>(lst.size());
    std::copy(lst.begin(), lst.end(), elem);
}

template<typename T>
Vector<T>::~Vector(){
    delete[] elem; // delete[] 释放new分配的对象数组指针指向的内存
}

template<typename T>
T &Vector<T>::operator[](int i){
    return elem[i];
}

template<typename T>
int Vector<T>::size() const{
    return sz;
}


template<typename T>
T *Vector<T>::begin(Vector<T> &x){
    return x.size() ? &x[0] : nullptr;
}

template<typename T>
T *Vector<T>::end(Vector<T> &x){
    return begin(x) + x.size();
}    