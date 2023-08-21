#include "Server.hpp"
using std::cout;
using std::endl;

void demo::fun1()
{
    m_iNo1 = 10;
    m_iNo2 = 20;
}

void demo::fun2()
{
    m_iNo1 = 10;       // error as non static
    m_iNo2 = 20;       // allowed as static
    this->m_iNo1 = 30; // error as no this pointer
    this->m_iNo2 = 40; // error as no this pointer
}

int demo::m_iNo2;
