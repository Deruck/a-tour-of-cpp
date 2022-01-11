#include<iostream>

class Vector{
private:
    double *elem; // 指向含size个double元素的数组
    int sz;
public:
    Vector(int); // 用长度初始化
    Vector(std::initializer_list<double>); // 用列表初始化
    ~Vector(); // 析构函数

    Vector(const Vector &a);  // 拷贝构造函数
    Vector &operator=(const Vector &a); // 拷贝赋值运算符

    Vector(Vector &&a); // 移动构造函数
    Vector &operator=(Vector &&a); // 移动赋值运算符

    double &operator[](int);
    int size() const;

    void push_back(double); // 在末尾push一个元素
};