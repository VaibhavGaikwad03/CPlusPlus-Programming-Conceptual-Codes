#include <iostream>
using namespace std;

class base
{
    int m_iPri;

public:
    int m_iPub;

    void fun1();

protected:
    int m_iPro;

    void fun2();

private:
    void fun3();

public:
    void display();
};

class derived : base
{
public:
    void display();
};