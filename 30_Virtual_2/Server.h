class base
{
    int iNo1;

public:
    virtual void fun1();
    virtual void fun2();
    virtual void fun3();
    void fun4();
};

class derived1 : public base
{
    int iNo2;

public:
    void fun2();
    virtual void fun5();
    virtual void fun6();
    void fun7();
};

class derived2 : public derived1
{
    int iNo3;

public:
    void fun1();
    void fun6();
    void fun8();
    virtual void fun9();
};