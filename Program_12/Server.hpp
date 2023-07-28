#include <iostream>
using namespace std;

class demo
{
    const int m_iNo1;
    int m_iNo2;

public:
    demo();
    void fun1();
    void fun2() const;
    void fun3(demo *const pPtr) const;
    void display();
};