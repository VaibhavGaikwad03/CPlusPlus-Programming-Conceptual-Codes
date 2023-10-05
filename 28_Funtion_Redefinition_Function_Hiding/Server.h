class base
{
public:
    void fun1();
    void fun1(int);
    void fun2();
    void fun2(int);
    void fun3();
};

class derived : public base
{
public:
    void fun1();    // redefinition
    void fun2(int, int);
    void fun4();
};