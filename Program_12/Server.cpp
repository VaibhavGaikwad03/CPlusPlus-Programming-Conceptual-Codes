#include "Server.hpp"

demo::demo() : m_iNo1(10), m_iNo2(20) {}

void demo::fun1()
{
    m_iNo1 = 30; // error m_iNo1 is constant
    m_iNo2 = 40; // allowed as non-constant
}

void demo::fun2() const
{
    m_iNo1 = 50; // error as constant member function
    m_iNo2 = 60; // error as constant member function
}

void demo::fun3(demo *const pPtr) const
{
    display();          // this->display() => display(this)
    m_iNo1 = 70;        // error as constant member function
    m_iNo2 = 80;        // error as constant member function
    this->m_iNo1 = 90;  // error as constant member function
    this->m_iNo2 = 100; // error as constant member function
    pPtr->m_iNo1 = 110; // error as constant data member
    pPtr->m_iNo2 = 120; // allowed
}

void demo::display()
{
    cout << m_iNo1 << endl;
    cout << m_iNo2 << endl;
}