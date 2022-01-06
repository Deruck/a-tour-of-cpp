class complex{ // 复数类
    double re, im; // 实部和虚部两个double
public:
    // 构造函数
    complex(double r, double i); // 两个标量构建复数
    complex(double r); // 一个标量构建复数
    complex(); //默认为0

    // 成员访问接口
    double real() const; // 函数名后加const，代表只读函数，如果尝试修改类成员则会编译错误
    void real(double);

    double imag() const;
    void imag(double);

    // 重载操作符
    complex &operator+=(complex);
    complex &operator-=(complex);
    // complex &operator*=(complex);
    // complex &operator/=(complex);

};

// 双目运算符不访问类成员变量，定义在类之外
complex operator+(complex, complex);
complex operator-(complex, complex);
complex operator-(complex);
bool operator==(complex, complex);
bool operator!=(complex, complex);
