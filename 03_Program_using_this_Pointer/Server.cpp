#include "Server.hpp"

void demo::fun1()
{
    m_iNo1 = 10;
    m_iNo2 = 20;
}

void demo::fun2()
{
    this->m_iNo1 = 30;
    this->m_iNo2 = 40;
}

void demo::fun3()
{
    cout << this;
}

demo demo::fun4()
{
    m_iNo1 = 50;
    this->m_iNo2 = 60;

    return *this; // returning calling object by value
}

demo *demo::fun5()
{
    this->m_iNo1 = 70;
    this->m_iNo2 = 80;

    return this;
}

void demo::display()
{
    cout << m_iNo1 << endl;
    cout << m_iNo2 << endl;
}