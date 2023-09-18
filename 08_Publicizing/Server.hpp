#include <iostream>
using namespace std;

class base
{
    void fun1();

public:
    void fun2();
    void fun2(int);
    void fun3();

protected:
    void fun4();
    void fun5();
};

class derived1 : private base
{
};

class derived2 : private base
{
public:
    using base::fun1; // error, can't publicize
    using base::fun2; // both publicize
    using base::fun4; // allowed
};