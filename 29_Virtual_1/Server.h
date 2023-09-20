class base
{
    int iNo1;
    int iNo2;

public:
    void fun1();
    virtual void fun2();
    void fun3();
    virtual void fun4(int iNo);
};

class derived : public base
{
    int iNo3;
    int iNo4;

public:
    void fun1();
    void fun4(int iNo);
    void fun5();
    virtual void fun6();
};